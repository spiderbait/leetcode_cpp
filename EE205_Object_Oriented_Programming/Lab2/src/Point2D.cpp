#include<iostream>
#include "Point2D.hpp"

using namespace std;

class Point2D
{
private:
    float x;
    float y;
public:
    Point2D() {}
    Point2D(float x, float y) {
        this->x = x;
        this->y = y;
    }
    float get_x() {
        return this->x;
    }
    float get_y() {
        return this->y;
    }
    void set_x(float x) {
        this->x = x;
    }
    void set_y(float y) {
        this->y = y;
    }
};

Point2D operator+(Point2D lhs, Point2D rhs) {
    Point2D p;
    p.set_x(lhs.get_x() + rhs.get_y());
    p.set_y(lhs.get_y() + rhs.get_y());
    return p;
}

Point2D operator-(Point2D lhs, Point2D rhs) {
    Point2D p;
    p.set_x(lhs.get_x() - rhs.get_y());
    p.set_y(lhs.get_y() - rhs.get_y());
    return p;
}
Point2D operator*(Point2D lhs, Point2D rhs) {
    Point2D p;
    p.set_x(lhs.get_x() * rhs.get_y());
    p.set_y(lhs.get_y() * rhs.get_y());
    return p;
}
Point2D operator/(Point2D lhs, Point2D rhs) {
    Point2D p;
    p.set_x(lhs.get_x() / rhs.get_y());
    p.set_y(lhs.get_y() / rhs.get_y());
    return p;
}

int main(){

    Point2D p1(1,2);
    Point2D p2(3,4);
    Point2D p;

    p = p1 + p2;

    cout << p.get_x() << p.get_y() << endl;

}
