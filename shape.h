//
// Created by betod on 3/23/2020.
//

#ifndef ASSIGNMENT_5_SHAPE_H
#define ASSIGNMENT_5_SHAPE_H

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    Shape();
    Shape(const double& ar, const double& per);
    void SetArea(const double& ar);
    void SetPerimeter(const double& per);
    double GetArea() const;
    double GetPerimeter() const;
    virtual void PrintData();

private:
    double area, perimeter;
};

#endif //ASSIGNMENT_5_SHAPE_H
