#include<iostream>
using namespace std;
class Shape {
public:
    virtual double area() = 0;  // pure virtual function
    virtual double perimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }

    double perimeter() override {
        return 2 * 3.14 * radius;
    }
};


int main()
{

    Shape sa();
    Circle ca(5);
    cout<< sa.area() << endl;
}