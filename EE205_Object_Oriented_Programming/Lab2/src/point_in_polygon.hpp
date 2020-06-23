#ifndef POINT_IN_POLYGON_HPP
#define POINT_IN_POLYGON_HPP

#include "Person.hpp"

////////////////////////////////////////////////////////////////////////////////
//
// Implement the C++ function below in point_in_polygon.cpp.
//
// The purpose of the function is to determine whether `test` lies within
// the polygon formed by the locations of the people in `points`.
//
////////////////////////////////////////////////////////////////////////////////
//
// NOTE:
//      std::size_t is an unsigned integer type
//      that is large enough to be able to hold the
//      maximum value of a "size" in C++.
//
//      You can treat it like a regular unsigned integer.
//
////////////////////////////////////////////////////////////////////////////////
bool pnpoly(
        std::size_t num_points,
        Person* points,
        Person test);

// bool pnpoly(std::size_t num_points,
//         Person* points,
//         Person test){
//         int i, j, c = 0;
//         for (int i = 0, j = num_points-1; i < num_points; i++) {
//         if( ((points[i].get_location().get_y()>test.get_location().get_y()) !=
//                     (points[j].get_location().get_y()>test.get_location().get_y())) &&
//                     (test.get_location().get_x() < (points[j].get_location().get_x()-points[i].get_location().get_x()) *
//                     (test.get_location().get_y()-points[i].get_location().get_y()) / 
//                     (points[j].get_location().get_y()-points[i].get_location().get_y()) + points[i].get_location().get_x())){
//                         c = !c;
//                     }
//     }
//     return c;
// }

#endif // POINT_IN_POLYGON_HPP
