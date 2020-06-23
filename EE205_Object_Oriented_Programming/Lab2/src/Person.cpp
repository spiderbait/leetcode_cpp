#include <iostream>
#include <string>
#include "Person.hpp"

using namespace std;
// Make sure to use both Point2D and std::string
// as member variables in the class below.
class Person { 
private:
    string name;
    Point2D location;
public:
    Person() {
        this->name = "";
        location.set_x(0);
        location.set_y(0);
    }
    Person(string name, float x, float y) {
        this->name = name;
        this->location.set_x(x);
        this->location.set_y(y);
    }
    string get_name() {
        return this->name;
    }
    void set_name(std::string name) {
        this->name = name;
    }
    Point2D get_location() {
        return this->location;
    }
    void set_location(Point2D location) {
        this->location = location;
    }
};

