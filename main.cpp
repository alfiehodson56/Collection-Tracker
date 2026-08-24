#include <iostream>
using namespace std;

int main() {
    int option;

    while (true) {
        cout << "Collection Tracker Program! \n";
        cout << "To view a collection enter 1 \n";
        cout << "To create a collection enter 2 \n";
        cout << "To quit the program enter 3 \n";
        cin >> option;

        if (cin.fail()) {
            cout << "Invalid input. Please try again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (option) {
            case 1:
                cout << "View collection selected! \n";
                break;

            case 2:
                cout << "Create new collection selected! \n";
                break;

            case 3:
                cout << "Quit program selected! \n";
                return 0;

            default:
                cout << "Invalid input. Please try again.\n";
                break;
        }
    }
}