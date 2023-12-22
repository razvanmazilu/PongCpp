#pragma once
#include"ball.h"
#include"paddle.h"

class Game 
{
public:
    Ball ball;
    Paddle leftPaddle;
    Paddle rightPaddle;

    Game();
    void MoveBall();
    void Draw();
    void PositionUpdate();
    bool CheckColision();
};