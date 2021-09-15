#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "form.h"

/*!
 * @brief Класс квадрата
 */
class Square : public Form
{
public:
    Square(int n);
    /*!
     * @brief Отрисовка фигуры
     */
    virtual void draw() const;
};

#endif // SQUARE_H
