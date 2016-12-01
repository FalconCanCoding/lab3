#include "triangle.h"

#include <iostream>
#include <math.h>

Triangle::Triangle()
{
    a = 0;
    h = 0;
}

Triangle::Triangle(double _a, double _h)
{
    a = _a;
    h = _h;
}

Triangle::~Triangle()
{}

double Triangle::GetSquare()
{
    return 0.5 * a * h;
}

void Triangle::PrintName()
{
    std::cout << "Triangle!" << std::endl;
}
