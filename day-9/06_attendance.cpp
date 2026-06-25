#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 5;
    const int DAYS = 5;

    int attendance[STUDENTS][DAYS];

    // Input attendance
    cout << "Enter attendance (1 = Present, 0 = Absent):\n";

    for (int i = 0; i < STUDENTS; i++) {
        cout << "\nStudent " << i + 1 << ":\n";

        for (int j = 0; j < DAYS; j++) {
            cin >> attendance[i][j];
        }
    }

    int highestAttendance = 0;
    int bestStudent = 0;

    cout << "\nAttendance Report\n";
    cout << "-----------------\n";

    for (int i = 0; i < STUDENTS; i++) {

        int presentDays = 0;

        for (int j = 0; j < DAYS; j++) {
            presentDays += attendance[i][j];
        }

        double percentage =
            (presentDays * 100.0) / DAYS;

        cout << "Student " << i + 1
             << " -> Present Days: "
             << presentDays
             << ", Attendance: "
             << percentage << "%\n";

        if (percentage < 75) {
            cout << "   Below 75% Attendance\n";
        }

        if (presentDays > highestAttendance) {
            highestAttendance = presentDays;
            bestStudent = i + 1;
        }
    }

    cout << "\nBest Attendance:\n";
    cout << "Student " << bestStudent
         << " with "
         << highestAttendance
         << " present days.\n";

    return 0;
}