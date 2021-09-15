#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "form.h"

/*!
 * @brief Класс треугольника
 */

class Triangle: public Form
{
public:
    Triangle(int n);
    /*!
     * @brief Отрисовка фигуры
     */
    virtual void draw() const;
};

#endif // TRIANGLE_H
