#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    using namespace std;

    std::vector<std::string> inventory = {"Health Potion", "Mana Potion", "Wooden Sword", "Iron Shield", "Magic Scroll"};

    cout << "Player found Golden Ring" << endl;
    inventory.push_back("Golden Ring");
    for (const auto &item : inventory){
        cout << item << endl;
    }

    cout << "\nPlayer used Health Potion" << endl;
    inventory.erase(inventory.begin());
    for (const auto &item : inventory){
        cout << item << endl;
    }

    cout << "\nWooden Sword replaced by Steel Sword" << endl;
    replace(inventory.begin(), inventory.end(), +"Wooden Sword", +"Steel Sword");
    for (const auto &item : inventory){
        cout << item << endl;
    }

    cout << "\nMagic Scroll traded with Silver Necklace" << endl;
    replace(inventory.begin(), inventory.end(), +"Magic Scroll", +"Silver Necklace");
    for (const auto &item : inventory){
        cout << item << endl;
    }
    cout << "\nSorted Alphabetically" << endl;
    sort(inventory.begin(), inventory.end());
    for (const auto &item : inventory){
        cout << item << endl;
    }
    
    return 0;
}