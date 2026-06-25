// Store marks of 3 classes, 5 students per class, and 4 subjects per student.

// Tasks: Calculate total
// marks of each student, class average, highest scorer in each class, and overall topper.

#include <iostream>
using namespace std;

int main() {
    const int CLASSES = 3;
    const int STUDENTS = 5;
    const int SUBJECTS = 4;

    int marks[CLASSES][STUDENTS][SUBJECTS];

    // Input marks
    for (int c = 0; c < CLASSES; c++) {
        cout << "\nEnter marks for Class " << c + 1 << ":\n";

        for (int s = 0; s < STUDENTS; s++) {
            cout << "\nStudent " << s + 1 << ":\n";

            for (int sub = 0; sub < SUBJECTS; sub++) {
                cout << "Subject " << sub + 1 << ": ";
                cin >> marks[c][s][sub];
            }
        }
    }

    int overallTopperClass = 0;
    int overallTopperStudent = 0;
    int overallHighestMarks = 0;

    // Processing
    for (int c = 0; c < CLASSES; c++) {

        int classTotalMarks = 0;
        int classHighestMarks = 0;
        int classTopperStudent = 0;

        cout << "\n===== Class " << c + 1 << " =====\n";

        for (int s = 0; s < STUDENTS; s++) {

            int studentTotal = 0;

            for (int sub = 0; sub < SUBJECTS; sub++) {
                studentTotal += marks[c][s][sub];
            }

            cout << "Student " << s + 1
                 << " Total Marks = "
                 << studentTotal << endl;

            classTotalMarks += studentTotal;

            // Highest scorer in class
            if (studentTotal > classHighestMarks) {
                classHighestMarks = studentTotal;
                classTopperStudent = s;
            }

            // Overall topper
            if (studentTotal > overallHighestMarks) {
                overallHighestMarks = studentTotal;
                overallTopperClass = c;
                overallTopperStudent = s;
            }
        }

        double classAverage =
            (double)classTotalMarks / STUDENTS;

        cout << "Class Average = "
             << classAverage << endl;

        cout << "Highest Scorer in Class "
             << c + 1
             << " = Student "
             << classTopperStudent + 1
             << " ("
             << classHighestMarks
             << " marks)\n";
    }

    cout << "\n===== OVERALL TOPPER =====\n";
    cout << "Class " << overallTopperClass + 1
         << ", Student " << overallTopperStudent + 1
         << " with "
         << overallHighestMarks
         << " marks\n";

    return 0;
}


