#include<common.h>


int constants::height = 800;
int constants::width = 1280;
int constants::paddleHeight = 120;
int constants::paddleWidth = 25;

int score::player = 0;
int score::cpu = 0;

Color constants::green = {38, 185, 154, 255};
Color constants::darkGreen = {20, 160, 133, 255};
Color constants::lightGreen = {129, 204, 184, 255};
Color constants::yellow = {243, 213, 91, 255};

void operator+=(Vector2& op1,const Vector2& op2)
{
    op1.x = op1.x + op2.x;
    op1.y = op1.y + op2.y;
}