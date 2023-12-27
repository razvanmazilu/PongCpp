#include <iostream>
#include"common.h"
#include"ball.h"
#include"paddle.h"
#include<raylib.h>

int main () 
{

    std::cout<< "Starting the game" << std::endl;
    Ball ball;
    Paddle player;
    CpuPaddle cpu;
  
    InitWindow(constants::width, constants::height, "My Pong Game!");
    SetTargetFPS(60);

    player.size.y = 120;
    player.size.x = 25;
    player.position.x = constants::width - player.size.x - 10;
    player.position.y = constants::height / 2 - player.size.y / 2;
    player.speed = 6;

    cpu.size.y = 120;
    cpu.size.x = 25;
    cpu.position.x = 10;
    cpu.position.y = constants::height / 2 - cpu.size.y / 2;
    cpu.speed = 6;

    while(WindowShouldClose() == false)
    {
        BeginDrawing();

        //Updating
        ball.Update();
        player.Update();

        //Drawing
        ClearBackground(BLACK);
        DrawLine(constants::width / 2, 0, constants::width / 2, constants::height, WHITE);
        ball.Draw();
        player.Draw();
        cpu.Draw();
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}