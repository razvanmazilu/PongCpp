#include<raylib.h>
class Paddle 
{
public:
    Vector2 startPos;
    Vector2 size;

    Paddle(Vector2 startPos, Vector2 size);
    void Draw();
    void Move();
};