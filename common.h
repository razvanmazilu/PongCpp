#pragma once
#include<raylib.h>
#include <raymath.h>

namespace constants 
{
    enum Player{
        pLeft = 0,
        pRight = 1
    };
    extern int height;
    extern int width;
    extern int paddleHeight;
    extern int paddleWidth;
    extern Color green;
    extern Color darkGreen;
}

void operator+=(Vector2& op1,const Vector2& op2);
