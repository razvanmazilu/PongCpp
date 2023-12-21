#include"ball.h"
#include"common.h"
#include <iostream>
Ball::Ball()
{
    position = {static_cast<float>(constants::width/2), \
        static_cast<float>(constants::height/2)};
    speed = 1;
    direction = {0, 1};
}


void Ball::Draw()
{
    DrawCircle(position.x, position.y, 10, constants::darkGreen);
}

void Ball::Delete()
{
    DrawCircle(position.x, position.y, 10, constants::green);
}

void Ball::Move(Paddle rP, Paddle lP)
{
    Draw();

    //dummy values
    static int x = -5;
    static int y = 1;
    if(CheckColisionWithMargins())
        y = -y;
    if(CheckColisionWithPaddle(rP, lP))
        x = -x;
    PositionUpdate(x, y);
}

void Ball::PositionUpdate(int x, int y)
{
    std::cout<<"new Pos(" << position.x <<", "<<position.y<< ")" <<std::endl;
    position.x += x;
    position.y += y;
}

bool Ball::CheckColisionWithMargins()
{
    if(position.y + 5 >= constants::height || position.y < 15)
        return true;
    
    return false;
}

bool Ball::CheckColisionWithPaddle(Paddle lP, Paddle rP)
{
    if(this->position.x + 10 >= constants::width || this->position.x + 10 < 0)
        return true;

    return false;
}

