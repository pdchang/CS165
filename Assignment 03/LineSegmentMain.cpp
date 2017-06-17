#include "Point.hpp"
#include "LineSegment.hpp"
#include <iostream>
using namespace std;
int main()
{

    Point p1;
    Point p2;
    LineSegment ls1(p1, p2);
    double length = ls1.length();
    double slope = ls1.slope();

    cout << p1.getXCoord() << " "<< p1.getYCoord() << endl;
    cout << p2.getXCoord() << " "<< p2.getYCoord() << endl;
    cout << "length: " << length << endl;
    cout << "slope "<< slope << endl;
    cout << p2.getXCoord() - p1.getXCoord() << endl;
    cout << p2.getYCoord() - p1.getYCoord() << endl;
   
    float t1 = 0;
    float t2 = -17.0;
    cout << t1 / t2 << endl;
    cout << "test" << endl;
    
    return 0;
}
