#pragma once
#include<raylib.h>
class Paddle 
{
public:
    Vector2 startPos;
    Vector2 size;

    Paddle();
    Paddle(Vector2 startPos, Vector2 size);
    void Draw();
    void Move();
};