#include "raylib.h"
#include <string>
#include <iostream>

// Forward Declarations
class Animal;
class Dog;
class Cat;

// Base Class: Animal
class Animal {
protected:
    std::string name;

public:
    Animal() {} // Default constructor

    void SetName(const std::string& animalName) {
        this->name = animalName;
    }

    void DrawName(int x, int y) {
        DrawText(this->name.c_str(), x, y, 20, BLACK);
    }
};

// Subclass: Dog
class Dog : public Animal {
public:
    Dog(const std::string& name) {
        this->SetName(name); // Setting the name using a method
    }

    void WagTail() {
        DrawText("Wagging Tail", 400, 200, 20, RED);
    }
};

// Subclass: Cat
class Cat : public Animal {
public:
    Cat(const std::string& name) {
        this->SetName(name); // Setting the name using a method
    }

    void Purr() {
        DrawText("Purring", 400, 250, 20, BLUE);
    }
};

// Main Function
int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Simple Animal Inheritance Example");

    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);

            myDog.DrawName(300, 200);
            myCat.DrawName(300, 250);

            myDog.WagTail(); // Dog specific action
            myCat.Purr();    // Cat specific action

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
