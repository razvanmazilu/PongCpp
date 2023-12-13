#include<raylib.h>
class Ball
{
    public:
    Vector2 position;
    int speed;
    Vector2 direction;
    
    Ball();
    void Draw();
    void Delete();
    void Move();
    void CheckColisionWithPaddle();
    void CheckColisionWithMargins();
    void ChangeDirection();
};