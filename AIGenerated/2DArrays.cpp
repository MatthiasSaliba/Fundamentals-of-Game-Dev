#include <iostream>
using namespace std;

//int main() {
//    // Step 1: Declare a 2D array of integers named 'matrix' with dimensions 3x3
//    int matrix[3][3];
//    // Step 2: Initialize 'matrix' with the numbers 1 to 9
//    int count = 1;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            matrix[i][j] = count;
//            count++;
//        }
//    }
//    // Step 3: Print the elements of 'matrix' using nested for loops
//	for (int i = 0; i < 3; i++) {
//	    for (int j = 0; j < 3; j++) {
//	        cout << matrix[i][j] << " ";
//	    }
//	    cout << endl;
//	}
//    return 0;
//}

//// Function to calculate the sum of elements in a 2D array
//int sumElements(int arr[3][3], int size) {
//    int total = 0;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            total += arr[i][j];
//        }
//    }
//    return total;
//}
//
//int main() {
//    // Step 1: Declare a 2D array of integers named 'matrix' with dimensions 3x3 and initialize it with the numbers 1 to 9
//    int matrix[3][3];
//    int count = 1;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            matrix[i][j] = count;
//            count++;
//        }
//    }
//    // Step 2: Write a function that takes a 2D array as input and returns the sum of the elements in the array
//    // Step 3: Call the function with 'matrix' as the argument and print the result
//    int sum = sumElements(matrix, 3);
//    cout << "The sum of the elements in the matrix is: " << sum << endl;
//
//    return 0;
//}


// Function to print the diagonal elements of a 2D array
//void printDiagonalElements(int arr[3][3], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i][i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    // Step 1: Declare a 2D array of integers named 'matrix' with dimensions 3x3 and initialize it with the numbers 1 to 9
//    int matrix[3][3];
//    int count = 1;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            matrix[i][j] = count;
//            count++;
//        }
//    }
//    // Step 2: Write a function that takes a 2D array as input and returns the diagonal elements of the array
//    // Step 3: Call the function with 'matrix' as the argument and print the result
//    printDiagonalElements(matrix, 3);
//
//    return 0;
//}

int sumElements(int arr[3][3], int size){
	int total = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            total += arr[i][j];
        }
    }
    return total;
}

int main() {
    // Step 1: Declare a 2D array of integers named 'matrix' with dimensions 3x3 and initialize it with the numbers 1 to 9
    int matrix[3][3];
    int count = 1;
    for (int i = 0; i < 3; i++){
    	for (int j = 0; j < 3; j++){
    		matrix[i][j] = count;
    		count++;
		}
	}
    // Step 2: Write a function that takes a 2D array as input and returns the sum of the elements in the array
    // Step 3: Call the function with 'matrix' as the argument and print the result
    cout << "The sum of the elements in the matrix is: " << sumElements(matrix, 3) << endl;

    return 0;
}



