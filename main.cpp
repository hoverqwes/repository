#include <iostream>
#include <form.h>
#include "rombous.h"
#include "square.h"
#include "triangle.h"
using namespace std;

int main()
{

    Form *forms[3];
    forms[0] = new Square(5);
    forms[1] = new Triangle(5);
    forms[2] = new Rombous(9);

    for (int i = 0; i < 3; ++i)
        forms[i]->draw();

   for (int i = 0; i < 3; ++i)
        delete forms[i];

    return 0;
}
