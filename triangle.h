//
// Created by betod on 3/23/2020.
//

#ifndef ASSIGNMENT_5_TRIANGLE_H
#define ASSIGNMENT_5_TRIANGLE_H

#include "shape.h"

class Triangle: public Shape{
public:
    Triangle();
    Triangle(const double& s1, const double& s2, const double& s3);
    void SetSide1(const double& s);
    void SetSide2(const double& s);
    void SetSide3(const double& s);
    double GetSide1();
    double GetSide2();
    double GetSide3();
    void PrintData();
    void Refresh();

private:
    double side1, side2, side3;
};


#endif //ASSIGNMENT_5_TRIANGLE_H
