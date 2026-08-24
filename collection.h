#pragma once

#include <string>
#include <vector>

#include "item.h"

class Collection {
    private:
    std::string name;
    std::string type;
    std::vector<Item> items;

    public:
    Collection (std::string name, std::string type);

    std::string getName();
    std::string getType();
    int getItemCount();

    void displayItems();
    void addItem(Item item);
    void removeItem(std::string itemName);
};
