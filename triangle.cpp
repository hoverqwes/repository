#include "triangle.h"

Triangle::Triangle(int n)
{
   _size = n;
}

void Triangle::draw() const
{
    printName("Треугольник");
    for(int i = 0; i < _size; ++i)
    {
        for(int j = 0; j <= i; ++j)
        {
            printCharacter();
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
