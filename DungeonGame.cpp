#include <iostream>
#include <string>

// Define constants for dungeon and inventory sizes
const int DUNGEON_SIZE = 5;
const int INVENTORY_SIZE = 5;

// Array to store the possible items in the dungeon (one per room).
std::string items[DUNGEON_SIZE] = {"Sword", "Shield", "Potion", "", "Gold Coin"};

// Function to get a pointer to the item in the current room.
std::string* getItem(int room) {
    // Check if the room number is valid (within the dungeon size).
    if (room < 0 || room >= DUNGEON_SIZE) {
        return nullptr; // Out of bounds, return null pointer.
    }
    return &items[room]; // Return a pointer to the item in the specified room.
}

// Function to add an item to the player's inventory.
bool addToInventory(std::string* inventory, std::string* item) {
    // Loop through each slot in the inventory
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        // Check if the slot is empty.
        if (inventory[i].empty()) {
            inventory[i] = *item;    // Add the item to the inventory slot.
            *item = "";              // Remove the item from the dungeon (set it to an empty string).
            return true;             // Successfully added item to inventory.
        }
    }
    return false; // Inventory full, couldn't add the item.
}

int main() {
    // Initialize the player's inventory with empty strings.
    std::string playerInventory[INVENTORY_SIZE] = {""};
    int currentRoom = 0; // Start in the first room.

    // Main game loop
    while (true) {
        std::cout << "You are in room " << currentRoom + 1 << ".\n"; // Display current room number.
        std::string* currentItem = getItem(currentRoom); // Get a pointer to the item in the current room.
        
        // Check if the current room has an item.
        if (!currentItem->empty()) {
            std::cout << "You found a " << *currentItem << "!\n";
            std::cout << "Do you want to pick it up? (yes/no) ";
            std::string choice;
            std::cin >> choice;
            // If the player chooses to pick up the item.
            if (choice == "yes") {
                if (addToInventory(playerInventory, currentItem)) {
                    std::cout << "Item added to your inventory.\n";
                } else {
                    std::cout << "Your inventory is full!\n";
                }
            }
        } else {
            std::cout << "This room is empty.\n"; // Display a message if the room is empty.
        }

        std::cout << "Do you want to go to the next room? (yes/no) ";
        std::string choice;
        std::cin >> choice;
        if (choice == "no") {
            break; // Exit the game loop if player chooses not to proceed.
        }      
        
        if(currentRoom + 1 == DUNGEON_SIZE){
            currentRoom = 0; // If player is in the last room, wrap around to the first room.
        } else {
            currentRoom++;  // Move to the next room.
        }
    }

    // Display the contents of the player's inventory.
    std::cout << "Your inventory: ";
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        if (!playerInventory[i].empty()) {
            std::cout << playerInventory[i] << " ";
        }
    }
    std::cout << "\n";

    return 0; // End the program.
}
