#include <iostream>
#include <string>
#include <vector>

#include "item.h"
#include "collection.h"
#include "user.h"

using namespace std;

void loginMenu(vector<User>& users);
void registerMenu(vector<User>& users);
void mainMenu(User& user);

int main() {
    vector<User> users;
    int option;

    while (true) {
        cout << "Collection Tracker Program! \n";
        cout << "To login enter 1 \n";
        cout << "To register enter 2 \n";
        cout << "To quit enter 3 \n";
        cin >> option;

        if (cin.fail()) {
            cout << "Invalid input. Please try again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (option) {
            case 1:
                loginMenu(users);
                break;

            case 2:
                registerMenu(users);
                break;

            case 3:
                cout << "Logout selected! \n";
                return 0;

            default:
                cout << "Invalid input. Please try again. \n";
                break;
        }
    }
}

void loginMenu(vector<User>& users) {

}

void registerMenu(vector<User>& users) {
    string username;
    string password;
    string rePassword;

    cout << "Register selected! \n";

    cout << "Enter a username \n";
    cin >> username;

    while (true) {
        cout << "Enter a password \n";
        cin >> password;

        cout << "Re-enter password \n";
        cin >> rePassword;

        if (password != rePassword) {
            cout << "Passwords do not match. Please try again. \n";
            continue;
        }

        break;
    }

    User user(username, password);
    users.push_back(user);
}

void mainMenu(User& user) {
    int option;

    while (true) {
        cout << "Collection Tracker Program! \n";
        cout << "To view a collection enter 1 \n";
        cout << "To create a collection enter 2 \n";
        cout << "To logout enter 3 \n";
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
                cout << "What collection would you like to view? \n";

                break;

            case 2:
                cout << "Create new collection selected! \n";
                break;

            case 3:
                cout << "Logout selected! \n";
                return;

            default:
                cout << "Invalid input. Please try again.\n";
                break;
        }
    }
}