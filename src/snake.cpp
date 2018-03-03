#include "../include/snake.h"

void Snake::init()
{
    for (int i=0; i!=920; ++i)
        if (i<40 || i>880)
            board.push_back('-');
        else if (!(i%39))
            board.push_back('|');
        else board.push_back(' ');
}

void Snake::draw()
{
    for (auto& a : board)
        std::cout << a;
}
