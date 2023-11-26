#include "raylib.h"

//Constants for the player attributes
const int playerWidth = 60.0f;
const int playerHeight = 20.0f;
const int playerSpeed = 300.0f;

class Player{
    private: 
        Vector2 position; //the position of the player
        float width; //the width of the player
        float height; //the height of the player
        Color color; //the color of the player
    public:
        //Constructor for the player
        Player(Vector2 position, float width, float height, Color color){
            this->position = position;
            this->width = width;
            this->height = height;
            this->color = color;
        }

        //Draws the player
        void Draw(){
            DrawRectangle(position.x, position.y, width, height, color);
        }
};

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Meteor Game");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

    //stack memory allocation
    Player player = Player({screenWidth/2-playerWidth/2, screenHeight-50}, playerWidth, playerHeight, GREEN);

    //heap memory allocation
    //Player* player = new Player({screenWidth/2-playerWidth/2, screenHeight-50}, playerWidth, playerHeight, GREEN);

    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            player.Draw();
            
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}