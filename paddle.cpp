#include "paddle.h"
#include "common.h"

Paddle::Paddle(Vector2 startPos, Vector2 size)
{
    this->startPos = startPos;
    this->size = size;
}

void Paddle::Draw()
{
    DrawRectangle(startPos.x, startPos.y, size.x, size.y, constants::darkGreen);
}

void Paddle::Move()
{
    int keyPressed = GetKeyPressed();

    switch (keyPressed)
    {
        case KEY_W:
            startPos.y -= 60;
            if(startPos.y < 5)
                startPos.y = 5;
            break;
        case KEY_S:
            startPos.y += 60;
            if(startPos.y + size.y > 475)
                startPos.y = 475 - size.y;
            break;
        default:
            break;
    }
}
