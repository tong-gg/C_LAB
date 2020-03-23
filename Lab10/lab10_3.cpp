#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
private:
    point center;
    double radius;
public:
    Circle(point center, double r){
        this->center = center;
        this->radius = r;
    }
    double area(){
        return M_PI * (radius * radius);
    }
    double distanceFromCenter(point pt){
        double result, xPow, yPow;
        xPow = (pt.xPosition - center.xPosition) * (pt.xPosition - center.xPosition);
        yPow = (pt.yPosition - center.yPosition) * (pt.yPosition - center.yPosition);
        result = sqrt(xPow + yPow);
        return result;
    }
    int contains(point pt){
        if (distanceFromCenter(pt) <= radius){
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main(){
    point center, checkPoint;
    double r;
    cout << "Center of Circle: ";
    cin >> center.xPosition >> center.yPosition;
    cout << "Radius of Circle: ";
    cin >> r;
    cout << "Point to Check: ";
    cin >> checkPoint.xPosition >> checkPoint.yPosition;
    Circle a(center, r);
    cout << "Area of Circle is " << a.area() << endl;
    cout << "Distance from Center to Point (" << checkPoint.xPosition
         << ", " << checkPoint.yPosition << ") is " << a.distanceFromCenter(checkPoint) << endl;
    if (a.contains(checkPoint)){
        cout << "This circle contains this point." << endl;
    }
    else{
        cout << "This point is not in this circle." << endl;
    }
    
}