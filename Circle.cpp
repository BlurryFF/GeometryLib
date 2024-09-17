#include "Circle.h"
#include "stdexcept"
#include "constants.h"

Circle::Circle(double radius) : radius(radius) {
    if (radius <= 0.0) {
        throw std::invalid_argument("radius cannot be less than or equal to 0");
    }
}

double Circle::getSquare() {
    return kPi * radius * radius;
}
