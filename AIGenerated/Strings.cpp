#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reversedString(string input){
	reverse(input.begin(), input.end());
	
	return input;
}

int main() {
    // Step 1: Declare a string variable named 'text' and initialize it with "Hello, World!"
    string text = "Hello, World!";
    // Step 2: Write a function that takes a string as input and returns the reversed string
    // Step 3: Call the function with 'text' as the argument and print the result
	cout << reversedString(text) << endl;
    return 0;
}

