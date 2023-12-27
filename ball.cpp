#include"ball.h"
#include"common.h"
#include <iostream>

Ball::Ball()
{
    radius = 20;
    position.x = constants::width/2;
    position.y = constants::height/2;
    speed.x = 7;
    speed.y = 7;
}

void Ball::Draw()
{
    DrawCircle(position.x, position.y, 20, constants::yellow);
}

void Ball::Update()
{
    position += speed;

    if(position.y + radius >= constants::height || position.y - radius <= 0)
        speed.y *= -1;

    if(position.x + radius >= constants::width)
    {
        score::cpu++;
        ResetBall();
    }
        
    if(position.x - radius <= 0)
    {
        score::player++;
        ResetBall();
    }   
}
        

void Ball::ResetBall()
{
    position.x = constants::width/2;
    position.y = constants::height/2;

    int speed_choices[2] = {-1, 1};

    speed.x *= speed_choices[GetRandomValue(0,1)];
    speed.y *= speed_choices[GetRandomValue(0,1)];
}
