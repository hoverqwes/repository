#ifndef FORM_H
#define FORM_H

#include <iostream>

/*!
 * @brief Базовый класс фигур
 */
class Form
{
public:
    Form();

    /*!
     * @brief Отрисовка фигуры
     * @note Метод переопределяется в каждом дочернем классе и
     * переопределяется под рисование определенной фигуры
     */
    virtual void draw() const = 0;
    /*!
     * @brief Вывод символа
     */
    void printCharacter() const;
    /*!
     * @brief Вывод названия фигуры
     * @param[in] название фигуры
     */
    void printName(std::string name) const;
protected:
    int _size; /*! <размер фигуры */
};

#endif // FORM_H
