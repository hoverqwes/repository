#include "rombous.h"

Rombous::Rombous(int n)
{
    if(n % 2 != 0 )
    {
        _size = n;
    }else
    {
        std::cout << "Введите нечетное число" << std::endl;
        std::cin >> n;
        _size = n;
    }
}
void Rombous::clearVector(std::vector<bool> &array) const
{
    for(int i = 0; i < _size; ++i)
    {
        array.push_back(false);
    }
}

void Rombous::calcRomb(std::vector<bool> &array, int i, int medium, int &increase, int &decrease) const
{
    if(i <= medium)
    {
        ++increase;
        array[medium - increase] = true;
        array[medium + increase] = true;
    }else
    {
        array[decrease] = false;
        array[_size - 1 - decrease] = false;
        ++decrease;
    }
}


void Rombous::draw() const
{
    printName("Ромб");

    std::vector<bool> array;
    int medium, decrease, increase;
    decrease = 0;
    increase = 0;
    clearVector(array);

    medium = floor(_size / 2);
    array[medium] = true;

    for(int i = 1; i <= _size; ++i)
    {
        for(int j = 0; j < _size; ++j)
        {
            if(array[j] == true)
            {
                printCharacter();
            }else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
        calcRomb(array, i, medium, increase, decrease);
    }
    std::cout << std::endl;
}

