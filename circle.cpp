//
// Created by betod on 3/23/2020.
//

#include "circle.h"

using namespace std;
// * Function Name: Circle default Constructor
// * Description: Circle Constructor for the circle class
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
Circle::Circle() :radius(1.00) {
   Refresh();
}
// * Function Name: Circle  Constructor
// * Description: Circle Constructor for the circle class
// * Parameter Description: ra: radius
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
Circle::Circle(const double &ra) {
    if (ra >= 1.00){
        this -> radius = ra;
    }
    else{
        this -> radius = 1.00;
    }
    Refresh();
}
// * Function Name: Circle set radius
// * Description: sets radius for the circle
// * Parameter Description: ra: radius
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Circle::SetRadius(const double &ra) {
    if (ra >= 1.00){
        this -> radius = ra;
    }
    Refresh();
}
// * Function Name: Circle get radius
// * Description: gets the private radius for the circle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
double Circle::GetRadius() {
    return radius;
}
// * Function Name: Print Data
// * Description: Prints data for the circle
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Circle::PrintData(){
    cout<<"\nCircle: \nRadius : "<<radius<<" \nArea : "<<GetArea()<<" \nPerimeter : "<<GetPerimeter() << endl << endl;
}
// * Function Name: Refresh
// * Description: Refreshes the area and perimeter calculations
// * Parameter Description: none
// * Date: 3/23/2020
// * Author: Alberto De Saint Malo
// * References: Professor Gaitros
void Circle::Refresh() {
    SetArea(3.14*radius*radius);
    SetPerimeter(2*3.14*radius);
}