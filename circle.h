//
// Created by betod on 3/23/2020.
//

#ifndef ASSIGNMENT_5_CIRCLE_H
#define ASSIGNMENT_5_CIRCLE_H

#include "shape.h"

class Circle: public Shape {
public:
    Circle();
    Circle (const double& ra);
    void SetRadius(const double& ra);
    double GetRadius();
    void PrintData();
    void Refresh();
private:
    double radius;
};


#endif //ASSIGNMENT_5_CIRCLE_H
