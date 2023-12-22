#include <iostream>
#include<raylib.h>
#include"common.h"
#include"paddle.h"
#include"ball.h"
#include"game.h"

int main () {

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Pong");
    SetTargetFPS(60);
    Game game;
    bool switchPaddle = true;
    while(WindowShouldClose() == false){

        BeginDrawing();
        
        ClearBackground(constants::green);
        game.Draw();
        
        if(switchPaddle)

            game.leftPaddle.Move();

        else
            game.rightPaddle.Move();

        switchPaddle = !switchPaddle; 
        game.MoveBall();
        //game.CheckColision();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}