#pragma once
#include<raylib.h>
#include <raymath.h>

namespace constants 
{
    extern int height;
    extern int width;
    extern int paddleHeight;
    extern int paddleWidth;
    extern Color green;
    extern Color darkGreen;
    extern Color lightGreen;
    extern Color yellow;
}

void operator+=(Vector2& op1,const Vector2& op2);

namespace score 
{
    extern int player;
    extern int cpu;
}
