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
     * @param[in] Вектор
     * @note Заполнение вектора значениями false для дальнейшего использования ячеек
     */
    void clearVector(std::vector<bool> &array) const;
    /*!
     * @brief Заполнение вектора
     * @param[in] Вектор
     * @param[in] Строка отрисовки
     * @param[in] Середина фигуры
     * @param[in] Увеличение горизонтальной отрисовки (до середины)
     * @param[in] Уменьшение горизонтальной отрисовки (после середины)
     * @note Заполнение вектора значениями false для дальнейшего использования ячеек
     */
    void calcRomb(std::vector<bool> &array, int i, int medium, int &increase, int &decrease) const;
};

#endif // CIRCLE_H
