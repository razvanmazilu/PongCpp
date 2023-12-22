#pragma once
#include<raylib.h>
#include"paddle.h"

class Ball
{
    public:
    Vector2 position;
    int speed;
    Vector2 direction;
    
    Ball();
    void Draw();
    void Move(Paddle lP, Paddle rP);
    
    bool CheckColisionWithMargins();
    bool CheckColisionWithPaddle(Paddle lP, Paddle rP);

    private:
    void PositionUpdate(int x, int y);
};