#include "paddle.h"

void Paddle::Draw()
{
    DrawRectangle(position.x, position.y, size.x, size.y, WHITE);
}

void Paddle::Update()
{
    if(IsKeyDown(KEY_UP) && position.y >= 0)
        position.y = position.y - speed;

    if(IsKeyDown(KEY_DOWN) && position.y + size.y <= constants::height)
        position.y = position.y + speed;

}

void CpuPaddle::Update(int ball_y)
{
    if(position.y + size.y / 2 > ball_y && position.y >= 0)
    {
        position.y = position.y - speed;
    }
    if(position.y + size.y / 2 <= ball_y && position.y + size.y <= constants::height)
    {
        position.y = position.y + speed;
    }
}
