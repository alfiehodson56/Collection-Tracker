#pragma once
#include <string>

class Item {
private:
    std::string name;
    std::string category;
    std::string initialDate;
    int initialValue;
    int currentValue;

public:
    Item(std::string name, std::string category, std::string initialDate, int initialValue);

    void setName(std::string name);
    void setCategory(std::string category);
    void setCurrentValue(int currentValue);

    std::string getName();
    std::string getCategory();
    std::string getInitialDate();
    int getInitialValue();
    int getCurrentValue();
};