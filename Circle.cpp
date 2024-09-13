#include "Circle.h"
#include "stdexcept"
#include "constants.h"

Circle::Circle(double radius) : radius(radius) {
    if (radius < 0.0) {
        throw std::invalid_argument("Радиус не может быть меньше 0!");
    }
}

double Circle::getSquare() {
    return PI * radius * radius;
}