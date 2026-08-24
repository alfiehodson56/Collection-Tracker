#include <iostream>
#include <string>

#include "collection.h"

using namespace std;

Collection::Collection(std::string name, std::string type) :
name(name),
type(type) {}

string Collection::getName() {
    return name;
}

string Collection::getType() {
    return type;
}

void Collection::addItem(Item item) {
    items.push_back(item);
}

int Collection::getItemCount() {
    return items.size();
}

void Collection::displayItems() {
    for (int i = 0; i < items.size(); i++) {
        cout << items[i].getName() << endl
        << items[i].getInitialDate() << endl;
    }
}

void Collection::removeItem(string itemName) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i].getName() == itemName) {
            items.erase(items.begin() + i);
            return;
        }
    }
}
