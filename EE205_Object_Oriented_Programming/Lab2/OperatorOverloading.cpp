#include <iostream>

using namespace std;

class Point2D {
    private:
        int x, y;
    public:
        Point2D(int x, int y) {
            this->x = x;
            this->y = y;
        }
        Point2D() {

        }
        int get_x() {
            return this->x;
        }

        int get_y() {
            return this->y;
        }

        void set_x(int x) {
            this->x = x;
        }

        void set_y(int y) {
            this->y = y;
        }

        Point2D operator+(const Point2D& p) {
            Point2D point2d;
            point2d.x = this->x + p.x;
            point2d.y = this->y + p.y;
            return point2d;
        }
};

// typedef class Point2D Point2D;
// Point2D operator+(Point2D& a,Point2D& b) {
//     Point2D *p;
//     p->set_x(a->get_x() + b->get_x());
//     p->set_y(a->get_y() + b->get_y());
//     return p;
// };

int main() {
    Point2D p1(1,3);
    Point2D p2(2,2);
    Point2D p3;

    p3 = p1 + p2;
    cout << p3.get_x() << p3.get_y() << endl;

    return 0;
}