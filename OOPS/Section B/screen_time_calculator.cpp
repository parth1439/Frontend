#include <iostream>
using namespace std;

int main()
 {
    float screenTime[7];
    float total = 0, average;

    cout << "Enter screen time for 7 days (in hours):" << endl;

    for(int i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> screenTime[i];

        total += screenTime[i];
    }

    average = total / 7;

    cout << "\nTotal Screen Time: " << total << " hours" << endl;
    cout << "Average Screen Time: " << average << " hours" << endl;

    if(average > 6) {
        cout << "Warning: Screen time exceeds healthy limit!" << endl;
    }
    else {
        cout << "Screen time is within healthy limit." << endl;
    }

    return 0;
}
