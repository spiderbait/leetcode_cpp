// These two lines are the opening part of what's called a "header guard"
// If this file is ever included more than one, it'll make sure that
// only one version of this code will show up to the compiler.
//
// In other words, it won't try to redefine things twice because it
// was included twice.
#ifndef POINT2D_HPP
#define POINT2D_HPP

// You'll need to turn this into a class.
// Make sure you use the concept of encapsulation,
// and hide the class's internal data.
struct Point2D {
    float x;
    float y;
};

class Point2D {
    private:
        float x;
        float y;
    public:
        Point2D (float x, float y) {
            this->x = x;
            this->y = y;
        }
        Point2D() {

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

        Point2D operator+(const Point2D &obj) {
            Point2D p;
            p.x = this->x + obj.x;
            p.y = this->x + obj.y;
            return p;
        }
        Point2D operator-(const Point2D &obj) {
            Point2D p;
            p.x = this->x - obj.x;
            p.y = this->x - obj.y;
            return p;
        }
        Point2D operator*(const Point2D &obj) {
            Point2D p;
            p.x = this->x * obj.x;
            p.y = this->x * obj.y;
            return p;
        }
        Point2D operator/(const Point2D &obj) {
            Point2D p;
            p.x = this->x / obj.x;
            p.y = this->x / obj.y;
            return p;
        }
};

#endif // POINT2D_HPP
