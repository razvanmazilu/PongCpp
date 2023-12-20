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
    DrawCircle(position.x, position.y, 10, constants::darkGreen);
}

void Ball::Delete()
{
    DrawCircle(position.x, position.y, 10, constants::green);
}

void Ball::Move()
{
    Draw();

    //dummy values
    static int x = 1;
    static int y = 4;
    if(CheckColisionWithMargins())
        y = -y;
    PositionUpdate(x, y);
}

void Ball::PositionUpdate(int x, int y)
{
    position.x += x;
    position.y += y;
}

bool Ball::CheckColisionWithMargins()
{
    if(position.y + 5 >= constants::height || position.y < 15)
    {
        return true;
    }
    return false;
}

bool Ball::CheckColisionWithPaddle(Paddle p)
{
    /// ???
    if(position.x + 10 > p.startPos.x || position.x + 10 < p.startPos.x + p.size.x)
        return true;

    return false;
}
