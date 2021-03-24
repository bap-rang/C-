#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(){}
    Point(int x, int y): x{x}, y{y} {}
    double computeDistan(Point p)
    {
        return sqrt((this->x - p.x) * (this->x - p.x) + (this->y - p.y) * (this->y - p.y));
    }
};

class Shape
{
public:
    Point p;
    Shape() {}
    virtual double computeArea() {};
    virtual double computeCircumference() {};
    double computeDistance(Shape t)
    {
        return p.computeDistan(t.p);
    }
};

class Circle: public Shape
{
private:
    double radius;
public:
    Circle(Point p, double radius): radius{radius} {this->p = p;}
    double computeArea()
    {
        return (radius * radius * 3.14);
    }
    double computeCircumference()
    {
        return (2 * radius * 3.14);
    }
};

class Square: public Shape
{
private:
    double side;
public:
    Square(Point p, double side): side{side} {this->p = p;}
    double computeArea()
    {
        return side * side;
    }
    double computeCircumference()
    {
        return side * 4;
    }
};

class Rectangle: public Shape
{
private:
    double length;
    double width;
public:
    Rectangle(Point p, double length, double width): length{length}, width{width} {this->p = p;}
    double computeArea()
    {
        return length * width;
    }
    double computeCircumference()
    {
        return (length + width) * 2;
    }
};
int main()
{
    Point p(1, 1);
    Point p2(5, 10);
    Circle k(p, 3);
    Circle t(p2, 6);
    cout << k.computeDistance(t) << "\n";
    cout << k.computeArea() <<"\n";
    cout << k.computeCircumference() <<"\n";
    return 0;
}
