#include <iostream>
#include <cstdlib>  // Including library for random number generation
#include <ctime>    // Including library for current time

int main() {
    using namespace std;
    srand(time(0)); // Seed the random number generator based on current time

    const int SIZE = 2;  // Define the size of the matrix
    int matrix[SIZE][SIZE];  // Declare a 2x2 matrix
    int num = 1;  // Variable to fill the matrix with numbers from 1 to 4

    // Filling the matrix with numbers in sequential order
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = num++;
        }
    }

    // Shuffling the matrix to create a random puzzle
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int randomI = rand() % SIZE;  // Generate a random row index
            int randomJ = rand() % SIZE;  // Generate a random column index

            // Swapping the current element with the random element
            int temp = matrix[i][j];
            matrix[i][j] = matrix[randomI][randomJ];
            matrix[randomI][randomJ] = temp;
        }
    }

    int turns = 0;  // Counting the number of turns taken by the player

    // Main game loop
    while (true) {
        // Display the current state of the matrix
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cout << matrix[i][j] << "\t";  // Output each element of the matrix
            }
            cout << endl;  // New line after each row
        }

        // Prompt the user for the first cell to swap
        int row1;
                int col1;
        cout << "Enter row of first cell to swap: ";
        cin >> row1;
        cout << "Enter column of first cell to swap: ";
        cin >> col1;

        // Prompt the user for the second cell to swap
        int row2; 
                int col2;
        cout << "Enter row of second cell to swap: ";
        cin >> row2;
        cout << "Enter column of second cell to swap: ";
        cin >> col2;

        // Swap the chosen cells
        int temp = matrix[row1][col1];
        matrix[row1][col1] = matrix[row2][col2];
        matrix[row2][col2] = temp;

        // Check if the matrix is in the correct order
        bool isSolved = true;
        num = 1;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (matrix[i][j] != num) {
                    isSolved = false;  // If any number is out of place, the puzzle is not solved
                    break;
                }
                num++;
            }           
        }

        // Increase the turn counter
        turns++;

        // Check if the puzzle is solved
        if (isSolved) {
            cout << "Congratulations! You solved the puzzle in " << turns << " turns." << endl;
            break;  // Exit the game loop as the puzzle is solved
        }
    }

    return 0;
}
