#include<iostream>
 
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
                std::cout << "P ";  // P for player
            } else if(board[i][j] == 0) {
                std::cout << "- ";  // - for unexplored
            } else if(board[i][j] == 2) {
                std::cout << "T ";  // T for treasure (this could be hidden in the real game)
            }
        }
        std::cout << std::endl;
    }
 
    return 0;
}