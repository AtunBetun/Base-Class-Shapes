//
// Created by betod on 3/23/2020.
//

#include "triangle.h"
// * Function Name: Triangle Default Constructor
// * Description: Default constructor for the triangle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
Triangle::Triangle():side1(1.00), side2(1.00), side3(1.00) {
  Refresh();
}
// * Function Name: Triangle Constructor
// * Description:  constructor for the triangle
// * Parameter Description: s1; side 1, s2: side 2, s3: side 3
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
Triangle::Triangle(const double &s1, const double &s2, const double &s3) {
    if (s1 >= 1){
        this -> side1 = s1;
    }
    else{
        this -> side1 = 1.00;
    }
    if (s1 >= 1){
        this -> side2 = s2;
    }
    else{
        this -> side2 = 1.00;
    }
    if (s1 >= 1){
        this -> side3 = s3;
    }
    else{
        this -> side3 = 1.00;
    }
    Refresh();
}
// * Function Name: SetSide 1
// * Description: Sets side for triangle
// * Parameter Description: s: side
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Triangle::SetSide1(const double &s) {
    if (s >= 1){
        this -> side1 = s;
    }
    Refresh();
}
// * Function Name: SetSide 2
// * Description: Sets side for triangle
// * Parameter Description: s: side
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Triangle::SetSide2(const double &s) {
    if (s >= 1){
        this -> side2 = s;
    }
    Refresh();
}
// * Function Name: SetSide 3
// * Description: Sets side for triangle
// * Parameter Description: s: side
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Triangle::SetSide3(const double &s) {
    if (s >= 1){
        this -> side3 = s;
    }
  Refresh();
}
// * Function Name: GetSide 1
// * Description: Gets side from the triangle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
double Triangle::GetSide1() {
    return side1;
}
// * Function Name: GetSide 2
// * Description: Gets side from the triangle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
double Triangle::GetSide2() {
    return side2;
}
// * Function Name: GetSide 3
// * Description: Gets side from the triangle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
double Triangle::GetSide3() {
    return side3;
}
// * Function Name: Print Data
// * Description: Prints Data from the triangle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Triangle::PrintData() {
    cout<<"\nTriangle: \nSide 1 : "<<side1<<" \nSide 2 : "<<side2<<" \nSide 3 : " <<side3<<" \nArea : "
    <<GetArea()<<" \nPerimeter : "<<GetPerimeter() << endl << endl;
}
// * Function Name: Refresh
// * Description: Refreshes the area and perimeter calculations
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Triangle::Refresh() {
    double s = (side1 +side2+side3)/2;
    SetArea(sqrt(s*(s-side1)*(s-side2)*(s-side3)));
    SetPerimeter(side1+side2+side3);
}