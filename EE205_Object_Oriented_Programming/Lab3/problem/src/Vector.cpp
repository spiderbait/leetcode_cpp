#include "Vector.hpp"

#include <utility>


Vector::Vector() {}

Vector::Vector(const Vector& other) {
    std::size_t length = other.size();
    std::size_t capacity = other.size();
    this->arr = new int[capacity];
    for (int i = 0; i < length; i++) {
        /* code */
    }
}

Vector::~