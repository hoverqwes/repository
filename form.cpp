#include "form.h"

Form::Form()
{

}
void Form::printCharacter() const
{
    std::cout << "+";
}

void Form::printName(std::string name) const
{
    std::cout << name << std::endl;
}
