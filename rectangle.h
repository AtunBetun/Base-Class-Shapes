//
// Created by betod on 3/23/2020.
//

#ifndef ASSIGNMENT_5_RECTANGLE_H
#define ASSIGNMENT_5_RECTANGLE_H

#include "shape.h"

class Rectangle: public Shape {
public:
    Rectangle();
    Rectangle (const double& le, const double& he);
    void SetLength(const double& le);
    void SetHeight(const double& he);
    double GetLength();
    double GetHeight();
    void PrintData();
    void Refresh();

private:
double length, height;
};


#endif //ASSIGNMENT_5_RECTANGLE_H
