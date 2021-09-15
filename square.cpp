#include "square.h"

Square::Square(int n)
{
    _size = n;
}
void Square::draw() const
{
    printName("Квадрат");
    for(int i = 0; i < _size; ++i)
    {
        for(int j = 0; j < _size; ++j)
        {
            printCharacter();
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
