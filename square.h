//
// Created by betod on 3/23/2020.
//

#ifndef ASSIGNMENT_5_SQUARE_H
#define ASSIGNMENT_5_SQUARE_H

#include "shape.h"

class Square :public Shape {
public:
    Square();
    Square(const double& le);
    void SetLength(const double& le);
    double GetLength() const;
    void PrintData();
    void Refresh();
private:
    double length;
};

#endif //ASSIGNMENT_5_SQUARE_H
