//
// Created by betod on 3/23/2020.
//

#include "square.h"
#include <iostream>
using namespace std;

Square::Square() :length(1.00){
    Refresh();
}

Square::Square(const double &le) {
    if (le >= 1.00){
        this->length = le;
    }
    else {
        this -> length = 1.00;
    }
    Refresh();
}

void Square::SetLength(const double &le) {
    if (le >= 1.00){
        this -> length = le;
    }
    Refresh();
}

double Square::GetLength() const {
    return length;
}

void Square::PrintData() {
    cout<<"\nSquare: \nLength :"<<length<<" \nArea : "<<GetArea()<<"\nPerimeter : "<<GetPerimeter() << endl << endl;
}

void Square::Refresh(){
    SetArea(length*length);
    SetPerimeter(length*4);
}

