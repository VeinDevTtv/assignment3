// Abdelkarim Ait Bourich / 10-16-2024
// This program calculates trampoline velocity for Sky High Sports

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double INITIAL_VELOCITY = 15.0;
    const double GRAVITY = 9.8;

    string operatorName, testerName;
    double startTime, endTime1, endTime2, endTime3;
    double height1, height2, height3;
    double avgVelocity1, avgVelocity2, avgVelocity3;

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

    cin.ignore();
    cout << "Enter the test subject's name: ";
    getline(cin, testerName);

    // Calculate positions
    double startHeight = startTime * (INITIAL_VELOCITY - 0.5 * GRAVITY *
           startTime);
    height1 = endTime1 * (INITIAL_VELOCITY - 0.5 * GRAVITY * endTime1);
    height2 = endTime2 * (INITIAL_VELOCITY - 0.5 * GRAVITY * endTime2);
    height3 = endTime3 * (INITIAL_VELOCITY - 0.5 * GRAVITY * endTime3);

    // Calculate average velocities
    avgVelocity1 = (height1 - startHeight) / (endTime1 - startTime);
    avgVelocity2 = (height2 - startHeight) / (endTime2 - startTime);
    avgVelocity3 = (height3 - startHeight) / (endTime3 - startTime);

    cout << fixed << setprecision(3);
    cout << "\nResults:\n";
    cout << "height (m)  time interval (s)  avg. velocity (m/s)\n";
    cout << setw(10) << height1 << "  " << startTime << " -> " << endTime1
        << setw(17) << avgVelocity1 << endl;
    cout << setw(10) << height2 << "  " << startTime << " -> " << endTime2
        << setw(17) << avgVelocity2 << endl;
    cout << setw(10) << height3 << "  " << startTime << " -> " << endTime3
        << setw(17) << avgVelocity3 << endl;

    cout << "\nLogging " << operatorName << " out of the system." << endl;
    cout << "Hope " << testerName << " had a good trial." << endl;
    cout << "Have a nice day!" << endl;

    return 0;
}

/* Sample Run:
Please enter the operator's name: Abdelkarim Ait Bourich
Enter the starting time in seconds: 1
Enter the first interval's end time: 1.01
Enter the second interval's end time: 1.001
Enter the third interval's end time: 1.0001
Enter the test subject's name: Badr Badri

Results:
height (m)  time interval (s)  avg. velocity (m/s)
    10.152  1.000 -> 1.010            5.151
    10.105  1.000 -> 1.001            5.195
    10.101  1.000 -> 1.000            5.200

Logging Abdelkarim Ait Bourich out of the system.
Hope Badr Badri had a good trial.
Have a nice day!
*/
