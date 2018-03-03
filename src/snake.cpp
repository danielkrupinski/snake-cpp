#include "../include/snake.h"

void Snake::draw()
{
    for (auto& a : board)
        std::cout << a << ' ';
}
