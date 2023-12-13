#include <iostream>
#include<raylib.h>
#include"common.h"
#include"paddle.h"
#include"ball.h"

int main () {

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Pong");
    SetTargetFPS(60);
    Vector2 startPosPLeft = {0, 0};
    Vector2 startPosPRight = {static_cast<float>(constants::width - 10), 0};
    Vector2 size = {10, static_cast<float>(constants::height/3)};
    Paddle pLeft(startPosPLeft, size);
    Paddle pRight(startPosPRight, size);
    Ball ball;
    while(WindowShouldClose() == false){

        BeginDrawing();
        
        ClearBackground(constants::green);
        pLeft.Draw();
        pRight.Draw();
        ball.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}