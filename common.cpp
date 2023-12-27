#include<common.h>


int constants::height = 800;
int constants::width = 1280;
int constants::paddleHeight = 120;
int constants::paddleWidth = 25;

Color constants::green = {173, 204, 96, 255};
Color constants::darkGreen = {43, 51, 24, 255};

void operator+=(Vector2& op1,const Vector2& op2)
{
    op1.x = op1.x + op2.x;
    op1.y = op1.y + op2.y;
}