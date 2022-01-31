#include <iostream>
using namespace std;

class Point
{
private:
    double _x;
    double _y;
public:
    Point();
    Point(double x, double y);
    void display();
};


Point::Point()
{
    _x = 0;
    _y = 0;
}
Point::Point(double x, double y)
{
    _x = x;
    _y = y;
}
void Point::display()
{
    cout << "x = " << _x << " y = " << _y << endl;
}

int main()
{
    Point p1;
    Point p2(5,10);
    p1.display();
    p2.display();
    return 0;
}