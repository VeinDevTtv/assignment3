// Abdelkarim Ait Bourich
// 10/16/2024
// This program calculates the average velocity of a person on a trampoline
// after launching off it based on specified time intervals.

#include <iostream>
#include <iomanip>
#include <string> // I have to use this because of MSVS

using namespace std;

int main() {
    const double INITIAL_VELOCITY = 15.0; // Initial velocity in m/s
    const double GRAVITY = 9.8; // Acceleration due to gravity in m/s^2

    string operatorName; // Name of the operator
    double startTime;    // Starting time in seconds
    double endTime1;     // First interval's end time
    double endTime2;     // Second interval's end time
    double endTime3;     // Third interval's end time
    string testSubject;  // Name of the test subject

    cout << "Enter the operator's name: ";
    getline(cin, operatorName);

    cout << "Enter the starting time in seconds: ";
    cin >> startTime;

    cout << "Enter the first interval's end time: ";
    cin >> endTime1;

    cout << "Enter the second interval's end time: ";
    cin >> endTime2;

    cout << "Enter the third interval's end time: ";
    cin >> endTime3;

    cout << "Enter the test subject's name: ";
    cin.ignore();
    getline(cin, testSubject);

    cout << fixed << setprecision(3);
    cout << "\nResults:\n";
    cout << setw(12) << "height (m)"
        << setw(20) << "time interval (s)"
        << setw(20) << "avg. velocity (m/s)" << endl;

    // Calculate the heights and average velocities for each interval
    double h_start = startTime * (INITIAL_VELOCITY - 0.5 * GRAVITY * startTime);
    double h_end1 = endTime1 * (INITIAL_VELOCITY - 0.5 * GRAVITY * endTime1);
    double h_end2 = endTime2 * (INITIAL_VELOCITY - 0.5 * GRAVITY * endTime2);
    double h_end3 = endTime3 * (INITIAL_VELOCITY - 0.5 * GRAVITY * endTime3);

    // Calculate and display results for the first interval
    double avg_velocity1 = (h_end1 - h_start) / (endTime1 - startTime);
    cout << setw(12) << h_start
        << setw(12) << startTime << " -> " << endTime1
        << setw(20) << avg_velocity1 << endl;

    // Calculate and display results for the second interval
    double avg_velocity2 = (h_end2 - h_end1) / (endTime2 - endTime1);
    cout << setw(12) << h_end1
        << setw(12) << endTime1 << " -> " << endTime2
        << setw(20) << avg_velocity2 << endl;

    // Calculate and display results for the third interval
    double avg_velocity3 = (h_end3 - h_end2) / (endTime3 - endTime2);
    cout << setw(12) << h_end2
        << setw(12) << endTime2 << " -> " << endTime3
        << setw(20) << avg_velocity3 << endl;

    cout << "\nLogging " << operatorName << " out of the system." << endl;
    cout << "Hope " << testSubject << " had a good trial." << endl;
    cout << "Have a nice day!" << endl;

    return 0;
}


/* Enter the operator's name: Abdelkarim Ait Bourich
Enter the starting time in seconds : 1
Enter the first interval's end time: 1.1
Enter the second interval's end time: 1.01
Enter the third interval's end time: 1.001
Enter the test subject's name: Kareem

Results :
    height(m)   time interval(s) avg.velocity(m / s)
    10.100       1.000 -> 1.100               4.710
    10.571       1.100 -> 1.010               4.661
    10.152       1.010 -> 1.001               5.146

    Logging Abdelkarim Ait Bourich out of the system.
    Hope Kareem had a good trial.
    Have a nice day!

    C:\Users\abdel\source\repos\assignment3\x64\Debug\assignment3.exe(process 18444) exited with code 0 (0x0).
    Press any key to close this window . . . */