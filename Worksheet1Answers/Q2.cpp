#include <iostream>

int main() {
    // Working with std Namespace
    using namespace std;

    // Declare the constants for the potions
    const int RED_POTION = 20;
    const int BLUE_POTION = 30;

    // Variables & Getting user input for red potion
    cout << "How many red potions do you want to mix? ";
    int redCount;
    cin >> redCount;

    // Variables & Getting user input for blue potion
    cout << "How many blue potions do you want to mix? ";
    int blueCount;
    cin >> blueCount;

    // Arithmetic Operations with variables
    int totalPower = (RED_POTION * redCount) + (BLUE_POTION * blueCount);

    // Display the result
    cout << "The total power of the mixed potion is: " << totalPower << endl;

    return 0;
}
