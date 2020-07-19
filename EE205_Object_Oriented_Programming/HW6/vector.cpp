#include <iostream>
#include <vector>
 
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
   Rectangle rec1(2,3), rec2(5,7), rec3(6,8);
   Triangle tri1(2,3), tri2(5,7), tri3(6,8);
   Shape *shape;
   vector<Rectangle> recV;
   recV.push_back(rec1);
   recV.push_back(rec2);
   recV.push_back(rec3);

   vector<Triangle> triV;
   triV.push_back(tri1);
   triV.push_back(tri2);
   triV.push_back(tri3);

   vector <Rectangle> :: iterator recI = recV.begin();
   vector <Triangle> :: iterator triI = triV.begin();

   // while(recI != recV.end()){
   //     cout << recI->getArea() << endl;
   //     recI ++;
   // }

   // while(triI != triV.end()){
   //     cout << triI->getArea() << endl;
   //     triI ++;
   // }

   vector <Shape*> shpV;
   shpV.push_back(&rec1);
   shpV.push_back(&rec2);
   shpV.push_back(&rec3);
   shpV.push_back(&tri1);
   shpV.push_back(&tri2);
   shpV.push_back(&tri3);

   vector <Shape*> :: iterator shpI = shpV.begin();
   while (shpI != shpV.end()) {
      shape = *shpI;
      cout << shape->getArea() << endl;
      shpI ++;
   }
}