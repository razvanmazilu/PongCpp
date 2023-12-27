#pragma once
#include<raylib.h>

class Ball
{
public:
    Vector2 position;
    Vector2 speed;
    int radius;
    
    Ball();
    void Draw();
    void Update();
    void ResetBall();
};