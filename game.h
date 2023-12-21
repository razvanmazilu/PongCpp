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
    ~Game();

private:
    bool CheckColisionWithPaddle(Paddle rp, Paddle lP);
};