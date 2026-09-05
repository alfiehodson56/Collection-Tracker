#include <iostream>
#include <string>
#include <vector>

#include "user.h"

using namespace std;

User::User(string name, string password) :
name(name),
password(password) {}

void User::setName(string name) {
    this->name = name;
}

void User::setPassword(string password) {
    this->password = password;
}

string User::getName() {
    return name;
}

string User::getPassword() {
    return password;
}

int User::getCollectionCount() {
    return collections.size();
}

Collection User::getCollection(int number) {
    return collections[number];
}

void User::displayCollections() {
    for (int i = 0; i < collections.size(); i++) {
        cout << i
        << ". Name: " << collections[i].getName()
        << ". Type: " << collections[i].getType() << endl;
    }
}

void User::addCollection(Collection collection) {
    collections.push_back(collection);
}
