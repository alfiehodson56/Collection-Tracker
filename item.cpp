#include <iostream>
#include <string>
#include "item.h"

using namespace std;

Item::Item(string name, string category, string initialDate, int initialValue, string condition) :
name(name),
category(category),
initialDate(initialDate),
initialValue(initialValue),
currentValue(initialValue),
condition(condition){}

void Item::setName(string name) {
    this->name = name;
}

void Item::setCategory(string category) {
    this->category = category;
}

void Item::setCurrentValue(int currentValue) {
    this->currentValue = currentValue;
}

void Item::setCondition(string condition) {
    this->condition = condition;
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

string Item::getCondition() {
    return condition;
}

