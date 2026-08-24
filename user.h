#pragma once

#include <string>
#include <vector>

#include "collection.h"

class User {
private:
    std::string name;
    std::string password;
    std::vector<Collection> collections;

public:
    User(std::string name, std::string password);

    void setName(std::string name);
    void setPassword(std::string password);

    std::string getName();
    std::string getPassword();
    int getCollectionCount();

    void displayCollections();
    void addCollection(Collection collection);
};