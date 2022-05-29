#include <iostream>
using namespace std;
class Shape
{
protected:
    int side;

public:
    virtual void numberOfSides() = 0;
};
class Trapezoid : public Shape
{
public:
    Trapezoid(int side)
    {
        this->side = side;
    };

    void numberOfSides()
    {
        cout << "The Number of Sides in Trapezoid is :" << side << endl;
    };
};

class Triangle : public Shape
{
public:
    Triangle(int side)
    {
        this->side = side;
    }
    void numberOfSides()
    {
        cout << "The Number of Sides in Triangle is : " << side << endl;
    };
};
class Hexagone : public Shape
{
public:
    Hexagone(int side)
    {
        this->side = side;
    }
    void numberOfSides()
    {
        cout << "The Number of Sides in Hexagone is :" << side << endl;
    };
};

int main(int argc, char const *argv[])
{

    Trapezoid trap(6);
    Triangle tri(5);
    Hexagone hexa(4);

    trap.numberOfSides();
    tri.numberOfSides();
    hexa.numberOfSides();
    return 0;
}