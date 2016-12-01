#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

/* Клас "Треугольник" наследуется от класса "Фигура"
 *
 * P.S. Наследование означает то, что класс-потомок("Треугольник") берет в себя
 * все, что есть в класса-предке("Фигура") и добавляет что-то ещё(то, что
 * есть внутри этого класса)
 */

class Triangle : public Figure
{
    double a; // сторона
    double h; // высота
public:
    Triangle();
    Triangle(double d1, double d2); // Конструктор с параметрами

    ~Triangle();

    double  GetSquare();
    void    PrintName();
};

#endif // CIRCLE_H
