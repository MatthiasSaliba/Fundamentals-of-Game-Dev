#include <iostream>

int main() {
    // Working with std Namespace
    using namespace std;

    // Declare the constant for the exchange rate
    const int EXCHANGE_RATE = 100;

    // Variables & Getting user input for the gold amount
    cout << "Enter the amount of gold you wish to exchange: ";
    int goldAmount;
    cin >> goldAmount;

    // Arithmetic Operations with variables
    int silverAmount = goldAmount * EXCHANGE_RATE;

    // Display the result
    cout << "For " << goldAmount << " gold, you will receive " << silverAmount << " silver." << endl;

    return 0;
}
