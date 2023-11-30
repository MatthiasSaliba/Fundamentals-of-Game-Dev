#include "raylib.h"
#include <vector>

class Brick {
    public: 
        Vector2 position; //holds the x and y position of the brick
        Vector2 size; //holds the width and height of the brick
        Color color; //holds the color of the brick

        //Constructor of the brick class
        Brick(Vector2 position, Vector2 size, Color color) {
            this->position = position;
            this->size = size;
            this->color = color;
        }

        //Draws the brick
        void Draw(){
            DrawRectangleV(position, size, color);
        }
};

class Ball{
    public:
        Vector2 position; //holds the x and y position of the ball
        float radius; //holds the radius of the ball
        Color color; //holds the color of the ball
        Vector2 speed; //holds the speed of the ball

        //Constructor of the ball class
        Ball(Vector2 position, float radius, Color color, Vector2 speed){
            this->position = position;
            this->radius = radius;
            this->color = color;
            this->speed = speed;
        }

        void Draw(){
            DrawCircleV(position, radius, color);
        }

        void Update(){
            //modify the position of the ball based on its speed
            position.x += speed.x * GetFrameTime();
            position.y += speed.y * GetFrameTime();

            if(position.x <= 0 || position.x >= GetScreenWidth()){
                speed.x *= -1; //reverse the horizontal direction of the ball
            }

            if(position.y <= 0 || position.y >= GetScreenHeight()){
                speed.y *= -1; //reverse the vertical direction of the ball
            }
        }
};

void GenerateBricks(std::vector<Brick>& bricks){
    //Assuming that our screen is 800px in width, we can fit 8 bricks in a row if each brick is 100px wide
    for(int i=0; i<8; i++){
        float x = 100 * i; //calculate the x position of the brick based on the index
        float y = 0; //set the y position of the brick to 0
        Vector2 position = {x,y}; //create a vector2 to hold the position of the brick
        Vector2 size = {100,50}; //create a vector2 to hold the size of the brick

        //randomly generate a color for the brick
        int r = GetRandomValue(0,255);
        int g = GetRandomValue(0,255);
        int b = GetRandomValue(0,255);

        Color color = {r,g,b,255}; //create a color based on the random values

        //create a brick instance
        Brick brick(position, size, color);
        bricks.push_back(brick); //add the brick to the vector
    }
}

void DrawBricks(std::vector<Brick>& bricks){
    //iterate through the vector of bricks
    for(int i=0; i<bricks.size(); i++){
        bricks[i].Draw(); //draw the brick
    }
}

void HandleBallBrickCollisions(Ball& ball, std::vector<Brick>& bricks){
    //check for collision between the ball and each brick
    for(int i=0;i<bricks.size();i++){
        //make use of CheckCollisionCircleRec to check for collision between the ball and the brick
        if(CheckCollisionCircleRec(ball.position, ball.radius, Rectangle{bricks[i].position.x, bricks[i].position.y, bricks[i].size.x, bricks[i].size.y})){
            ball.speed.y *= -1; //reverse the vertical direction of the ball
            bricks.erase(bricks.begin() + i); //remove the brick from the vector
            break; //break out of the loop
        }
    }
}

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    std::vector<Brick> bricks; //holds all the bricks in the game

    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Brick Game");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    //create a single brick instance
    Brick brick({200,50}, {100,50}, RED);

    //create a single ball instance
    Ball ball({400,300}, 10, RED, {200,200});

    GenerateBricks(bricks); //generate the bricks
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        ball.Update(); //update the ball
        HandleBallBrickCollisions(ball, bricks); //handle the ball and brick collisions
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawBricks(bricks); //draw the bricks
        ball.Draw(); //draw the ball

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}