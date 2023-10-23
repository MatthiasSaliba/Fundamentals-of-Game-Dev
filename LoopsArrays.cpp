#include <iostream>
#include <string>
using namespace std;
 
int main() {
    // 0 is unexplored, 1 is player, 2 is treasure
    int board[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},  // Player starts at position (1,1)
        {0, 0, 0, 0, 0},
        {0, 0, 2, 0, 0},  // Treasure is hidden at position (3,2)
        {0, 0, 0, 0, 0}
    };
 
    // Display the board:
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(board[i][j] == 1) {
                cout << "P ";  // P for player
            } else if(board[i][j] == 0) {
                cout << "- ";  // - for unexplored
            } else if(board[i][j] == 2) {
                cout << "T ";  // T for treasure (this could be hidden in the real game)
            }
        }
        cout << endl;
    }
    string playerMovement;

    cout << "Where do you want to move ? WASD" << endl;
    cin >> playerMovement;

    if (playerMovement == 'W') {

    } else if (playerMovement == 'A') {

    } else if ()

 
    return 0;
}