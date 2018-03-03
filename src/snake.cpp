#include "../include/snake.h"

void Snake::init()
{
    for (int i=0; i!=920; ++i)
        board.push_back('X');
}

void Snake::draw()
{
    for (auto& a : board)
        std::cout << a << ' ';
}
