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

void Ball::Move(Paddle rP, Paddle lP)
{
    Draw();

    //dummy values
    static int x = -2;
    static int y = 1;
    if(CheckColisionWithMargins())
        y = -y;
    if(CheckColisionWithPaddle(rP, lP))
        x = -x;
    PositionUpdate(x, y);
}

void Ball::PositionUpdate(int x, int y)
{
   // std::cout<<"new Pos(" << position.x <<", "<<position.y<< ")" <<std::endl;
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
    if(this->position.x + 35 >= constants::width || this->position.x - 35 < 0)
    {
        if(this->position.y > lP.startPos.y && this->position.y < (lP.startPos.y + lP.size.y))
        {
            /* debug
            std::cout<< "ball {" << this->position.x << ", "<<this->position.y<<"}"<<std::endl;
            std::cout<< "lP startPosition{" << lP.startPos.x << ", "<<lP.startPos.y<<"}"<<std::endl;
            std::cout<< "lP endPosition{" << lP.startPos.x + lP.size.x << ", "<<lP.startPos.y + lP.size.y<<"}"<<std::endl;*/
            return true;
        }
        
        if(this->position.y > rP.startPos.y && this->position.y < (rP.startPos.y + rP.size.y))
        {
            return true;
        }
        
    }     

    return false;
}

