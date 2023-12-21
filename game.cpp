#include "game.h"

Game::Game()
{
}

bool Game::CheckColisionWithPaddle(Paddle rP, Paddle lP)
{
    if(ball.position.x + 10 > lP.startPos.x || ball.position.x + 10 < lP.startPos.x + lP.size.x)
        return true;
    
    
    return false;
}
