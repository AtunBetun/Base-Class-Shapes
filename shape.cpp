//
// Created by betod on 3/23/2020.
//

#include "shape.h"

// * Function Name: Shape Default Constructor
// * Description: Default constructor for shape left empty on purpose
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
Shape::Shape() {

}
// * Function Name: Shape Constructor
// * Description: Constructor for the shape class, only accepts areas and perimeters bigger than 1
// * Parameter Description: ar: area, per: perimeter
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
Shape::Shape(const double& ar, const double& per) {
    if(ar >= 1.00){
        this->area = ar;
    }
    if(per >= 1.00){
        this->perimeter = per;
    }
    else{
        this->area = 1.00;
        this->perimeter = 1.00;
    }
}
// * Function Name: Set Area
// * Description: Sets the area for the shape
// * Parameter Description: ar: area
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Shape::SetArea(const double &ar) {
    this -> area = ar;
}
// * Function Name: Set Perimeter
// * Description: Sets perimeter for shape
// * Parameter Description: per: perimeter
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Shape::SetPerimeter(const double &per) {
    this -> perimeter = per;
}
// * Function Name: Get area
// * Description: Gets area for the shape
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
double Shape::GetArea() const {
    return area;
}
// * Function Name: Get Perimeter
// * Description: Gets perimeter for the shape
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
double Shape::GetPerimeter() const {
    return perimeter;
}
// * Function Name: Print Data
// * Description: virtual function for printing data
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Shape::PrintData() {

}