#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>
#include <QMenuBar>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QStatusBar>
#include <QLabel>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QRegularExpression>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("Text Editor");
    window.resize(800, 600);

    QTextEdit *editor = new QTextEdit();
    window.setCentralWidget(editor);

    QString currentFile = "";

    QLabel *wordLabel = new QLabel("Words: 0");
    QLabel *charLabel = new QLabel("Characters: 0");
    QLabel *lineLabel = new QLabel("Lines: 0");

    window.statusBar()->addPermanentWidget(wordLabel);
    window.statusBar()->addPermanentWidget(charLabel);
    window.statusBar()->addPermanentWidget(lineLabel);

    // File Menu
    QMenu *fileMenu = window.menuBar()->addMenu("File");

    QAction *newAction = fileMenu->addAction("New");
    QAction *openAction = fileMenu->addAction("Open");
    QAction *saveAction = fileMenu->addAction("Save");
    QAction *saveAsAction = fileMenu->addAction("Save As");
    QAction *exitAction = fileMenu->addAction("Exit");

    // Edit Menu
    QMenu *editMenu = window.menuBar()->addMenu("Edit");

    QAction *cutAction = editMenu->addAction("Cut");
    QAction *copyAction = editMenu->addAction("Copy");
    QAction *pasteAction = editMenu->addAction("Paste");
    QAction *undoAction = editMenu->addAction("Undo");
    QAction *redoAction = editMenu->addAction("Redo");
    QAction *selectAllAction = editMenu->addAction("Select All");

    // Search Menu
    QMenu *searchMenu = window.menuBar()->addMenu("Search");

    QAction *findAction = searchMenu->addAction("Find");
    QAction *replaceAction = searchMenu->addAction("Replace");

    // Tools Menu
    QMenu *toolsMenu = window.menuBar()->addMenu("Tools");

    QAction *statsAction = toolsMenu->addAction("Show Statistics");

    // Statistics Update
    QObject::connect(editor, &QTextEdit::textChanged,
    [&]()
    {
        QString text = editor->toPlainText();

        int characters = text.length();

        QStringList words =
            text.split(QRegularExpression("\\s+"),
                       Qt::SkipEmptyParts);

        int wordCount = words.count();

        int lineCount =
            text.isEmpty() ? 0 : text.count('\n') + 1;

        wordLabel->setText(
            "Words: " + QString::number(wordCount));

        charLabel->setText(
            "Characters: " + QString::number(characters));

        lineLabel->setText(
            "Lines: " + QString::number(lineCount));
    });

    // New File
    QObject::connect(newAction, &QAction::triggered,
    [&]()
    {
        editor->clear();
        currentFile.clear();
    });

    // Open File
    QObject::connect(openAction, &QAction::triggered,
    [&]()
    {
        QString fileName =
            QFileDialog::getOpenFileName(
                &window,
                "Open File",
                "",
                "Text Files (*.txt);;All Files (*)");

        if(fileName.isEmpty())
            return;

        QFile file(fileName);

        if(file.open(QIODevice::ReadOnly |
                     QIODevice::Text))
        {
            QTextStream in(&file);
            editor->setPlainText(in.readAll());
            currentFile = fileName;
            file.close();
        }
    });

    // Save File
    QObject::connect(saveAction, &QAction::triggered,
    [&]()
    {
        if(currentFile.isEmpty())
        {
            currentFile =
                QFileDialog::getSaveFileName(
                    &window,
                    "Save File",
                    "",
                    "Text Files (*.txt)");

            if(currentFile.isEmpty())
                return;
        }

        QFile file(currentFile);

        if(file.open(QIODevice::WriteOnly |
                     QIODevice::Text))
        {
            QTextStream out(&file);
            out << editor->toPlainText();
            file.close();

            QMessageBox::information(
                &window,
                "Saved",
                "File Saved Successfully");
        }
    });

    // Save As
    QObject::connect(saveAsAction, &QAction::triggered,
    [&]()
    {
        QString fileName =
            QFileDialog::getSaveFileName(
                &window,
                "Save As",
                "",
                "Text Files (*.txt)");

        if(fileName.isEmpty())
            return;

        currentFile = fileName;

        QFile file(currentFile);

        if(file.open(QIODevice::WriteOnly |
                     QIODevice::Text))
        {
            QTextStream out(&file);
            out << editor->toPlainText();
            file.close();
        }
    });

    QObject::connect(exitAction,
                     &QAction::triggered,
                     &app,
                     &QApplication::quit);

    // Edit Functions
    QObject::connect(cutAction,
                     &QAction::triggered,
                     editor,
                     &QTextEdit::cut);

    QObject::connect(copyAction,
                     &QAction::triggered,
                     editor,
                     &QTextEdit::copy);

    QObject::connect(pasteAction,
                     &QAction::triggered,
                     editor,
                     &QTextEdit::paste);

    QObject::connect(undoAction,
                     &QAction::triggered,
                     editor,
                     &QTextEdit::undo);

    QObject::connect(redoAction,
                     &QAction::triggered,
                     editor,
                     &QTextEdit::redo);

    QObject::connect(selectAllAction,
                     &QAction::triggered,
                     editor,
                     &QTextEdit::selectAll);

    // Find
    QObject::connect(findAction, &QAction::triggered,
    [&]()
    {
        bool ok;

        QString word =
            QInputDialog::getText(
                &window,
                "Find",
                "Enter word:",
                QLineEdit::Normal,
                "",
                &ok);

        if(ok && !word.isEmpty())
        {
            if(!editor->find(word))
            {
                QMessageBox::information(
                    &window,
                    "Find",
                    "Word Not Found");
            }
        }
    });

    // Replace
    QObject::connect(replaceAction,
                     &QAction::triggered,
    [&]()
    {
        bool ok;

        QString oldWord =
            QInputDialog::getText(
                &window,
                "Replace",
                "Find:",
                QLineEdit::Normal,
                "",
                &ok);

        if(!ok || oldWord.isEmpty())
            return;

        QString newWord =
            QInputDialog::getText(
                &window,
                "Replace",
                "Replace With:",
                QLineEdit::Normal,
                "",
                &ok);

        if(!ok)
            return;

        QString text =
            editor->toPlainText();

        text.replace(oldWord, newWord);

        editor->setPlainText(text);
    });

    // Statistics Popup
    QObject::connect(statsAction,
                     &QAction::triggered,
    [&]()
    {
        QString text = editor->toPlainText();

        int chars = text.length();

        int words =
            text.split(
                QRegularExpression("\\s+"),
                Qt::SkipEmptyParts).count();

        int lines =
            text.isEmpty() ? 0 :
            text.count('\n') + 1;

        QMessageBox::information(
            &window,
            "Statistics",
            "Words : " + QString::number(words) +
            "\nCharacters : " + QString::number(chars) +
            "\nLines : " + QString::number(lines));
    });

    window.show();

    return app.exec();
}