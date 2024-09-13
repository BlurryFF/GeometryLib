#include "Triangle.h"
#include "stdexcept"
#include "cmath"

Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {
    if(!isTriangle(a,b,c)){
        throw std::invalid_argument("Такого треугольника не существует!");
    }
}

bool Triangle::isTriangle(double& a,double& b,double& c) const {
    if (a <= 0 || b <= 0 || c <= 0){
        return false;
    }
    if (a + b <= c || b + c <= a || a + c <= b){
        return false;
    }

    return true;
}

bool Triangle::isRightTriangle() const {
    double hypotenuse = std::max(a, std::max(b,c));
    double sideA = std::min(a, std::min(b,c));
    double sideB = (a + b + c) - hypotenuse - sideA;

    if (sideA*sideA + sideB*sideB == hypotenuse*hypotenuse){
        return true;
    }
    return false;
}

double Triangle::getSquare() {
    double p = (a + b + c) / 2;
    return std::sqrt(p*(p-a)*(p-b)*(p-c));
}
