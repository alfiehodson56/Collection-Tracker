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
void viewCollection(User& user);
void collectionMenu(Collection collection);
void createCollection(User& user);
void deleteCollection(User& user);

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
    string username;
    string password;

    cout << "Login Selected! \n";

    while (true) {
        cout << "Enter your username \n";
        cin >> username;

        cout << "Enter your password \n";
        cin >> password;


        for (User& user : users) {
            if (user.getName() == username && user.getPassword() == password) {

                cout << "Login successful \n";
                mainMenu(user);
                return;
            }
        }

        cout << "Invalid username or password. Please try again. \n";
    }
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

        cout << "Registration successful \n";
        break;
    }

    User user(username, password);
    users.push_back(user);
}

void viewCollection(User& user) {
    int option;

    cout << "View Collections! \n";
    user.displayCollections();

    while (true) {
        cout << "To select a collection enter its assigned number \n";
        cin >> option;

        if (cin.fail()) {
            cout << "Invalid input. Please try again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        break;
    }

    Collection collection = user.getCollection(option);
    collectionMenu(collection);
}

void collectionMenu(Collection collection) {
    int option;

    while (true) {
        cout << collection.getName() << " Collection Selected! \n";
        cout << "To view items enter 1 \n";
        cout << "To add item enter 2 \n";
        cout << "To delete item enter 3 \n";
        cout << "To go back enter 4 \n";
        cin >> option;

        if (cin.fail()) {
            cout << "Invalid input. Please try again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
    }
}

void createCollection(User& user) {
    string name;
    string type;

    cout << "Create Collection! \n";

    cout << "Enter a collection name \n";
    cin >> name;

    cout << "Enter a collection type \n";
    cin >> type;

    Collection collection(user.getCollectionCount(), name, type);
    user.addCollection(collection);
}

void deleteCollection(User& user) {

}

void mainMenu(User& user) {
    int option;

    while (true) {
        cout << "Collection Tracker Program! \n";
        cout << "To view collections enter 1 \n";
        cout << "To create a collection enter 2 \n";
        cout << "To delete a collection enter 3 \n";
        cout << "To logout enter 4 \n";
        cin >> option;

        if (cin.fail()) {
            cout << "Invalid input. Please try again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (option) {
            case 1:
                cout << "View collections selected! \n";
                viewCollection(user);
                break;

            case 2:
                cout << "Create new collection selected! \n";
                createCollection(user);
                break;

            case 3:
                cout << "Delete collection selected! \n";
                deleteCollection(user);
                break;

            case 4:
                cout << "Logout selected! \n";
                return;

            default:
                cout << "Invalid input. Please try again.\n";
                break;
        }
    }
}