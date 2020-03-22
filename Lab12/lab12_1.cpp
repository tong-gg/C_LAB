#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D
{
    public:
        virtual double volumn();
        virtual double surfaceArea();
};
};


class RightRectangularPyramid : public Shape3D
{
    private:
        double width;
        double length;
        double height;
    public:
        RightRectangularPyramid();
        RightRectangularPyramid(double width, double length, double height);
        double volumn();
        double surfaceArea();

};

class Sphere : public Shape3D
{
    private:
        double radius;
    public:
        Sphere();
        Sphere(double radius);
        double volumn();
        double surfaceArea();
};

RightRectangularPyramid::RightRectangularPyramid(double width, double length, double height){
    this->width = width;
    this->length = length;
    this->height = height;
}

RightRectangularPyramid::RightRectangularPyramid(){
    this->width = 2;
    this->length = 3;
    this->height = 4;
}

double RightRectangularPyramid::volumn(){
    double v;
    v = (width * length * height) / 3;
    return v;
    
}

double RightRectangularPyramid::surfaceArea(){
    double a;
    a = length * width + (length * sqrt(pow(width / 2, 2) + pow(height, 2)))
        + (width * sqrt(pow(length / 2, 2) + pow(height, 2)));
    return a;
}

Sphere::Sphere(double radius){
    this->radius = radius;
}

Sphere::Sphere(){
    this->radius = 5;
}

double Sphere::volumn(){
    double v;
    v = (4 * M_PI * pow(radius, 3)) / 3;
    return v;
    
}

double Sphere::surfaceArea(){
    double a;
    a = 4 * M_PI * pow(radius, 2);
    return a;
}

// Driver code
int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        Shape3D **shapes = new Shape3D*[3];
        shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
        shapes[1] = new Sphere(10.6);
        shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
        for (int i = 0; i < 3; i++) {
            cout << "Volumn: " << (*shapes)->volumn() << endl;
            cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
            cout << "--------------------\n";
            *shapes++;
        }
    } else if (tc == 2) {
        RightRectangularPyramid rectangle;
        Sphere sphere;
        cout << rectangle.volumn() << endl;
        cout << rectangle.surfaceArea() << endl;
        cout << sphere.volumn() << endl;
        cout << sphere.surfaceArea() << endl;
    } else if (tc == 3) {
        RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
        cout << rectangle.volumn() << endl;
        cout << rectangle.surfaceArea() << endl;
    } else if (tc == 4) {
        Sphere sphere(34.25);
        cout << sphere.volumn() << endl;
        cout << sphere.surfaceArea() << endl;
    } else if (tc == 5) {
        RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
        Sphere sphere(34.25);
        Shape3D *shape = &rectangle;
        cout << shape->volumn() << " " << shape->surfaceArea() << endl;
        shape = &sphere;
        cout << shape->volumn() << " " << shape->surfaceArea() << endl;
    } else if(tc == 6) {
    }

}