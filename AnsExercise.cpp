#include<iostream>

int main() {
	
	using namespace std;
    // 0 is unexplored, 1 is player, 2 is treasure
    int board[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},  // Player starts at position (1,1)
        {0, 0, 0, 0, 0},
        {0, 0, 2, 0, 0},  // Treasure is hidden at position (3,2)
        {0, 0, 0, 0, 0}
    };
    
    int playerPosX = 1;
    int playerPosY = 1;
    int moveCounter =0;
    
    while(true){
    	
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
	    
	    //moveCounter is counting our moves
	    if(moveCounter == 5){
	    	cout << "You reached the max number of moves. Sorry.";
	    	break;	    	
		}
	    
	    board[playerPosX][playerPosY]=0; //0 means empty ground (remove the player from the board before changing his/her position)
	    
	    //ask the user for the input
	    cout << "Choose Input:";
	    char inputUser;
	    cin >> inputUser;
	    
	    moveCounter++; //increment moveCounter by 1 for every move
	    
	    switch(inputUser){
	    	case 'W':
	    	case 'w':
	    		playerPosX--; // playerPosX = playerPosX - 1
	    		break;
	    	case 'S':
	    	case 's':
	    		playerPosX++;
	    		break;
	    	case 'A':
	    	case 'a':
	    		playerPosY--;
	    		break;
	    	case 'D':
	    	case 'd':
	    		playerPosY++;
	    		break;
	    		
	    	default:
	    		break;
		}
		
		//checking for boundaries
		if(playerPosX < 0)
		{
			playerPosX =0;
		}
		
		if(playerPosX > 4){
			playerPosX =4;
		}
		
		if(playerPosY <0){
			playerPosY=0;
		}
		
		if(playerPosY >4){
			playerPosY =4;
		}
		
		//check if player is hitting with the treasure
		if(board[playerPosX][playerPosY] == 2){
			cout << "You found the treasure !!";
			break;			
		}
		
		//update the 2d array board
		board[playerPosX][playerPosY]=1; //1 means the player
		
	
	}

   

    return 0;
}
