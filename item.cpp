#include <iostream>
#include <string>
#include "item.h"

using namespace std;

Item::Item(string name, string category, string initialDate, int initialValue) :
name(name),
category(category),
initialDate(initialDate),
initialValue(initialValue),
currentValue(initialValue) {}

void Item::setName(string name) {
    this->name = name;
}

void Item::setCategory(string category) {
    this->category = category;
}

void Item::setCurrentValue(int currentValue) {
    this->currentValue = currentValue;
}

string Item::getName() {
    return name;
}

string Item::getCategory() {
    return category;
}

string Item::getInitialDate() {
    return initialDate;
}

int Item::getInitialValue() {
    return initialValue;
}

int Item::getCurrentValue() {
    return currentValue;
}

