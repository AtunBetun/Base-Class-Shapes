//
// Created by betod on 3/23/2020.
//

#include "rectangle.h"
// * Function Name: Rectangle default Constructor
// * Description: Rectangle Constructor for the rectangle class
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
Rectangle::Rectangle() :length(1.00), height(1.00){
    Refresh();
}
// * Function Name: Rectangle Constructor
// * Description: Rectangle Constructor for the rectangle class
// * Parameter Description: le: length, he: height
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
Rectangle::Rectangle(const double &le, const double &he) {
    if (le >= 1.00){
        this -> length = le;
    }
    if (he >= 1.00){
        this -> height = he;
    }
    else {
        length = 1.00;
        height = 1.00;
    }
    Refresh();
}
// * Function Name: Rectangle Set length
// * Description: Sets length for rectangle
// * Parameter Description: le:length
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Rectangle::SetLength(const double &le) {
    if (le >= 1.00){
        this -> length = le;
    }
    Refresh();
}
// * Function Name: Rectangle Set height
// * Description: Sets height for rectangle
// * Parameter Description: he:height
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Rectangle::SetHeight(const double &he) {
    if (he >= 1.00){
        this -> height = he;
    }
    Refresh();
}
// * Function Name: Rectangle get length
// * Description: gets length for the rectangle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
double Rectangle::GetLength() {
    return length;
}
// * Function Name: Rectangle Get height
// * Description: Gets height for rectangle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
double Rectangle::GetHeight(){
    return height;
}
// * Function Name: Rectangle Print Data
// * Description: Prints data for rectangle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Rectangle::PrintData() {
    cout<<"\nRectangle: \nLength :"<<length<<" \nHeight : "<<height <<" \nArea : "<<GetArea()<<" \nPerimeter : "<<GetPerimeter() << endl << endl;
}
// * Function Name: Refresh
// * Description: Refreshes the area and perimeter calculations
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Rectangle::Refresh() {
    SetArea(length*height);
    SetPerimeter((2*length)+(2*height));
}