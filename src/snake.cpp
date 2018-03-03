#include "../include/snake.h"

void init()
{
    for (auto& a : board)
        a = 'X';
}

void draw()
{
    for (int i=0; i!=board.size(); ++i)
        if (!(i%20))
            std::cout << board[i];
        else
        {
            std::cout << endl;
            std::cout << board[i];
        }
}
