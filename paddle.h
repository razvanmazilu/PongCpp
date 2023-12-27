#pragma once
#include"common.h"

class Paddle
{
public:
    Vector2 position;
    Vector2 size;
    int speed;

    void Draw();
    void Update();
};

class CpuPaddle: public Paddle
{
public:
    void Update(int ball_y);
};