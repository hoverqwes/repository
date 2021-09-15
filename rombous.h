#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <vector>
#include <math.h>
#include "form.h"

/*!
 * @brief Класс ромба
 */
class Rombous: public Form
{
public:
    Rombous(int n);
    /*!
     * @brief Отрисовка фигуры
     */
    virtual void draw() const;
    /*!
     * @brief Заполнение вектора
     * @param[i] Вектор
     * @note Заполнение вектора значениями false для дальнейшего использования ячеек
     */
    void clearVector(std::vector<bool> &array) const;
    /*!
     * @brief Заполнение вектора
     * @param[i] Вектор
     * @param[i] Строка отрисовки
     * @param[i] Середина фигуры
     * @param[i] Увеличение горизонтальной отрисовки (до середины)
     * @param[i] Уменьшение горизонтальной отрисовки (после середины)
     * @note Заполнение вектора значениями false для дальнейшего использования ячеек
     */
    void calcRomb(std::vector<bool> &array, int i, int medium, int &increase, int &decrease) const;
};

#endif // CIRCLE_H
