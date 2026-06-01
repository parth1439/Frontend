#include <iostream>
using namespace std;

int main()
 {
    int hours;

    cout << "Enter hours studied today: ";
    cin >> hours;

    if (hours >= 8) {
        cout << "Excellent! You are very dedicated." << endl;
    }
    else if (hours >= 5) {
        cout << "Good job! Keep improving." << endl;
    }
    else if (hours >= 2) {
        cout << "You can do better. Stay focused!" << endl;
    }
    else {
        cout << "Start studying seriously!" << endl;
    }

    return 0;
}
