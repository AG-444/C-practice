#include <iostream>
#include <cmath>

using namespace std;

class triangle
{
public:
    double side1;
    double side2;
    double side3;

    double perimeter()
    {
        return side1 + side2 + side3;
    }
    double area()
    {
        int s;
        s = (side1 + side2 + side3) / 2;

        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main()
{
    triangle triangle1;
    triangle1.side1 = 3;
    triangle1.side2 = 4;
    triangle1.side3 = 5;

    cout << "Perimeter of triangle = " << triangle1.perimeter() << endl;
    cout << "Area of triangle = " << triangle1.area() << endl;
}
____
