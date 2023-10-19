#include <iostream>

int main() {
    // Working with std Namespace
    using namespace std;

    // Declare the constant for base score
    const int BASE_SCORE = 500;

    // Variables & Getting user input for the multiplier
    cout << "Enter your score multiplier: ";
    int multiplier;
    cin >> multiplier;

    // Arithmetic Operations with variables
    int newScore = BASE_SCORE * multiplier;

    // Display the result
    cout << "Your new game score is: " << newScore << endl;

    return 0;
}
