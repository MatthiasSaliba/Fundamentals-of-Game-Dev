#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Declare a vector of integers named 'numbers'
    vector<int> numbers;
    // Step 2: Use the push_back function to add the numbers 1, 2, 3, 4, and 5 to the vector
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    // Step 3: Print the elements of the vector using a for loop
    for (int i = 0; i < numbers.size(); i++) {
    	cout << numbers[i] << endl;
	}
	
    return 0;
}


