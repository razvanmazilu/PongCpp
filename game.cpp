#include "game.h"
#include"common.h"
#include "paddle.h"
#include "ball.h"
#include <raylib.h>

Game::Game()
{
    Vector2 ballPos = {constants::width/2, constants::height/2};
    Vector2 startPosPLeft = {5, 5};
    Vector2 startPosPRight = {static_cast<float>(constants::width - 25), 5};
    Vector2 size = {20, static_cast<float>(constants::height/4)};
    ball = Ball();
    ball.position = ballPos;
    leftPaddle = Paddle(startPosPLeft, size);
    rightPaddle = Paddle(startPosPRight, size);
    scoreLeftPlayer = 0;
    scoreRightPlayer = 0;
}

void Game::MoveBall()
{
    ball.Move(this->leftPaddle, this->rightPaddle);
}

void Game::Draw()
{
    ball.Draw();
    leftPaddle.Draw();
    rightPaddle.Draw();
   // DrawText(TextFormat("%i", scoreLeftPlayer), 150, \
            0.1*constants::height, 40, constants::darkGreen);
    
    //DrawText(TextFormat("%i", scoreRightPlayer), constants::width - 150, \
            0.1*constants::height, 40, constants::darkGreen);
}

void Game::PositionUpdate()
{
    MoveBall();
    leftPaddle.Move();
    rightPaddle.Move();
}

// bug? unreacheble for moment
bool Game::CheckColision()
{
    ball.CheckColisionWithPaddle(this->leftPaddle, this->rightPaddle);
    ball.CheckColisionWithMargins();
    scoreLeftPlayer += ball.countLeftPaddleHits;
    scoreRightPlayer += ball.countRightPaddleHits;
}
