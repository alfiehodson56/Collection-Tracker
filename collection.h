#pragma once

#include <string>
#include <vector>

#include "item.h"

class Collection {
    private:
    int number;
    std::string name;
    std::string type;
    std::vector<Item> items;

    public:
    Collection (int number, std::string name, std::string type);

    int getNumber();
    std::string getName();
    std::string getType();
    int getItemCount();

    void displayItems();
    void addItem(Item item);
    void removeItem(std::string itemName);
};
