#include"ball.h"
#include"common.h"
Ball::Ball()
{
    position = {static_cast<float>(constants::width/2), \
        static_cast<float>(constants::height/2)};
    speed = 1;
    direction = {0, 1};
}


void Ball::Draw()
{
    DrawCircle(position.x, position.y, 5, constants::darkGreen);
}