#include <iostream>
 
using namespace std;
 
// Base class
class Shape {
   public:
      
      Shape(int a = 0, int b = 0) {
          width = a;
          height = b;
      }

      void setWidth(int w) {
         width = w;
      }
   
      void setHeight(int h) {
         height = h;
      }

      virtual int getArea() = 0;
   
   protected:
      int width;
      int height;
};

// Derived classes
class Rectangle: public Shape {
   public:
        Rectangle( int a = 0, int b = 0):Shape(a, b) { }
        int getArea() {
            return width*height;
        }
};

class Triangle: public Shape {
   public:
        Triangle( int a = 0, int b = 0):Shape(a, b) { }
        int getArea() {
            return width*height/2;
        }
};

// int main() {

//     Shape *shape;
//     Rectangle rec(4,5);
//     Triangle tri(3,4);

//     shape = &rec;
//     cout << shape->getArea() << endl;

//     shape = &tri;
//     cout << shape->getArea() << endl;

// }

int main(void) {
   Rectangle Rect;
   Triangle  Tri;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   
   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getArea() << endl;

   Tri.setWidth(5);
   Tri.setHeight(7);
   
   // Print the area of the object.
   cout << "Total Triangle area: " << Tri.getArea() << endl; 

   return 0;
}