#include <iostream>

int main() {
    // Working with std Namespace
    using namespace std;

    // Declare the player's initial health as a constant
    const int CHARACTER_HEALTH = 100;

    // Variables & Getting user input
    cout << "Enter the amount of damage taken: ";
    int damageTaken;
    cin >> damageTaken;

    // Arithmetic Operations with variables
    int remainingHealth = CHARACTER_HEALTH - damageTaken;

    // Display the result
    cout << "After taking the damage, your character has " << remainingHealth << " health left." << endl;

    return 0;
}
