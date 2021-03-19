#include <iostream>
#include <cmath>
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"

using namespace std;
int main()
{
    Circle c1;
    Circle c2(-4);
    Circle c4(7);
    c1.PrintData();
    c2.PrintData();
    c4.PrintData();
    c2.SetRadius(8);
    c2.PrintData();

    Rectangle r1;
    Rectangle r2(-5,6);
    Rectangle r3(3,0);
    r1.PrintData();
    r2.PrintData();
    r3.PrintData();
    r3.SetHeight(6);
    r3.PrintData();

    Square s1;
    Square s2(-9);
    Square s3(4);
    s1.PrintData();
    s2.PrintData();
    s3.PrintData();
    s3.SetLength(3);
    s3.PrintData();


    Triangle t1(0, 0, 0);
    Triangle t2(4,2,3);
    t1.PrintData();
    t2.PrintData();
    t1.SetSide1(6);
    t2.PrintData();

    return 0;
}
