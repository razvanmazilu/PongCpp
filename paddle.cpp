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