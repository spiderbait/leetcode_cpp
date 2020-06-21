
#include<iostream>

using namespace std;

class Point2D {
    private:
        float x;
        float y;
    public:
        Point2D(float x, float y) {
            this->x = x;
            this->y = y;
        }
    
        Point2D() {

        }

        float getX() {
            return this->x;
        }

        float getY() {
            return this->y;
        }

        void setX(float x) {
            this->x = x;
        }

        void setY(float y) {
            this->y = y;
        }

        friend Point2D operator+(Point2D lhs, Point2D rhs);
        friend Point2D operator-(Point2D lhs, Point2D rhs);
        friend Point2D operator*(Point2D lhs, Point2D rhs);
        friend Point2D operator/(Point2D lhs, Point2D rhs); 

};

Point2D operator+(Point2D lhs, Point2D rhs) {
    Point2D p;
    p.setX(lhs.getX() + rhs.getY());
    p.setY(lhs.getY() + rhs.getY());
    return p;
}

Point2D operator-(Point2D lhs, Point2D rhs) {
    Point2D p;
    p.setX(lhs.getX() - rhs.getY());
    p.setY(lhs.getY() - rhs.getY());
    return p;
}
Point2D operator*(Point2D lhs, Point2D rhs) {
    Point2D p;
    p.setX(lhs.getX() * rhs.getY());
    p.setY(lhs.getY() * rhs.getY());
    return p;
}
Point2D operator/(Point2D lhs, Point2D rhs) {
    Point2D p;
    p.setX(lhs.getX() / rhs.getY());
    p.setY(lhs.getY() / rhs.getY());
    return p;
}


int main(){
    Point2D p1(1,2);
    Point2D p2(3,4);
    Point2D p3;

    p3 = p1 + p2;

    cout << p3.getX() << " " << p3.getY() << endl;

}
