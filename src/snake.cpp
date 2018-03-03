#include "../include/snake.h"

void Snake::init()
{
    for (int i=0; i!=1880; ++i)
        if (i<80)
            board.push_back('-');
        else if (i%78==0)
            board.push_back('|');
        else board.push_back(' ');
}

void Snake::draw()
{
    for (auto& a : board)
        std::cout << a;
}
