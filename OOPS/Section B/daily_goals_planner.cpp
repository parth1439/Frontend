#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream writeFile;
    ifstream readFile;
    string goal;

    // Writing to file
    writeFile.open("goals.txt", ios::app);

    cout << "Enter your daily goal: ";
    getline(cin, goal);

    writeFile << goal << endl;

    writeFile.close();

    cout << "\nSaved Successfully!" << endl;

    // Reading from file
    cout << "\nYour Saved Goals:" << endl;

    readFile.open("goals.txt");

    while(getline(readFile, goal)) {
        cout << "- " << goal << endl;
    }

    readFile.close();

    return 0;
}
