#pragma once

#include <string>

class Item {
private:
    std::string name;
    std::string category;
    std::string initialDate;
    int initialValue;
    int currentValue;
    std::string condition;

public:
    Item(std::string name, std::string category, std::string initialDate, int initialValue, std::string condition);

    void setName(std::string name);
    void setCategory(std::string category);
    void setCurrentValue(int currentValue);
    void setCondition(std::string condition);

    std::string getName();
    std::string getCategory();
    std::string getInitialDate();
    int getInitialValue();
    int getCurrentValue();
    std::string getCondition();
};