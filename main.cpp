#include <iostream>
#include<raylib.h>
#include"common.h"
#include"paddle.h"
#include"ball.h"

int main () {

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Pong");
    SetTargetFPS(60);
    Vector2 startPosPLeft = {5, 5};
    Vector2 startPosPRight = {static_cast<float>(constants::width - 25), 5};
    Vector2 size = {20, static_cast<float>(constants::height/4)};
    Paddle pLeft(startPosPLeft, size);
    Paddle pRight(startPosPRight, size);
    Ball ball;
    while(WindowShouldClose() == false){

        BeginDrawing();
        
        ClearBackground(constants::green);
        pLeft.Draw();
        pLeft.Move();
        pRight.Draw();
        ball.Move();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}