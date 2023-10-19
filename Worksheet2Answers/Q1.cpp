#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    // Working with std Namespace
    using namespace std;

    srand(time(NULL));
    bool isGameRunning =true;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    
    while(isGameRunning){        
        //ask user for choice
        cout << "Choose [1]Rock [2]Paper [3]Scissors:";
        int playerChoice;
        cin >> playerChoice;
        
        //AI selects choice
        int aiChoice = rand() % 3 + 1; //generates a random number between 1 and 3
        
        switch(aiChoice){
            case 1:
                cout << "AI selected Rock" << endl;
                break;
            case 2:
                cout << "AI selected Paper" << endl;
                break;
            case 3:
                cout << "AI selected Scissors" << endl;
                break;
        }

        if(playerChoice == aiChoice){
          
            cout << "Game is Draw" << endl;
        }
        else{
            if((playerChoice == 1 && aiChoice==2) || (playerChoice==1 && aiChoice==3) || (playerChoice == 3 && aiChoice==2) || (playerChoice ==2 && aiChoice==1)){
                cout << "User won" << endl;
            }
            else{
                cout << "AI won" << endl;
            }
        }          
        
        cout << "Do you want to play again y/n?";
        char playAgain;
        cin >> playAgain;
        
        if(playAgain == 'n' || playAgain == 'N'){
            isGameRunning = false;
        }
    }      
    
    return 0;
        
}


    
