#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <vector>

class Snake {
public:
    void init();
    void draw();
private:
    std::vector<char> board(88,200);
};

#endif
