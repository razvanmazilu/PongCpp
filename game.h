#pragma once
#include"ball.h"
#include"paddle.h"

class Game 
{
public:
    Ball ball;
    Paddle leftPaddle;
    Paddle rightPaddle;
    int scoreLeftPlayer;
    int scoreRightPlayer;

    Game();
    void MoveBall();
    void Draw();
    void PositionUpdate();
    bool CheckColision();
};