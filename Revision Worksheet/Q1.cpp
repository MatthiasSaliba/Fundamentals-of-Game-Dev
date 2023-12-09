#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(NULL));
    int randNum1 = rand() % 4 + 1;
    int randNum2 = rand() % 4 + 1;
    int randNum3 = rand() % 4 + 1;
    
    
    cout << randNum1 << randNum2 << randNum3 << endl;
    
    int userIn1;
    int userIn2;
    int userIn3;
    string hint;
    
    cout << "Welcome to Lucky Number Slots" << endl;
    cout << "Guess the sequence of three numbers (each between 1 and 4)." << endl;
    for(int i = 1; i<4; i++){
    	
    	cout << "Attempt " << i << " of 3" << endl;
    	
    	cout << "Enter your first guess" << endl;
    	cin >> userIn1;
    	
    	cout << "Enter your second guess" << endl;
    	cin >> userIn2;
    	
    	cout << "Enter your third guess" << endl;
    	cin >> userIn3;
    	
    	if (userIn1 != randNum1) {
    		if (userIn1 < randNum1){
    			cout << "First number is too low. ";
			} else {
				cout << "First number is too high. ";
			}
		} else {
			cout << "First number is correct. ";
		}
		
		if (userIn2 != randNum2) {
    		if (userIn2 < randNum2){
    			cout << "Second number is too low. ";
			} else {
				cout << "Second number is too high. ";
			}
		} else {
			cout << "Third number is correct. ";
		}
		
		if (userIn3 != randNum3) {
    		if (userIn3 < randNum3){
    			cout << "Third number is too low. " << endl;
			} else {
				cout << "Third number is too high. " << endl;
			}
		} else {
			cout << "Third number is correct. " << endl;
		}
		if (userIn1 == randNum1 && userIn2 == randNum2 && userIn3 == randNum3){
			cout << "You won the game!!!" << endl; 
		} else {
			cout << "You lost the game!!!" << endl;
		}
		
		cout << "Would you like a hint? (y/n)" << endl;
		cin >> hint;
		if (hint == "y"){
			int randHint = rand() % 3 + 1;
			switch (randHint){
				case 1:
					cout << "The first number is " << randNum1 << endl;
					break;
				case 2: 
					cout << "The second number is " << randNum2 << endl;
					break;
				case 3:
					cout << "The third number is " << randNum3 << endl;
					break;
			}
		}
		
	}

    return 0;
}
