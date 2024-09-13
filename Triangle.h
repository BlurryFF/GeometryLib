#ifndef GEOMETRYLIB_TRIANGLE_H
#define GEOMETRYLIB_TRIANGLE_H

#include "Figure.h"


class Triangle : public Figure {
private:
    double a,b,c;

public:
    Triangle(double a, double b, double c);
    bool isTriangle(double a, double b, double c);
    bool isRightTriangle(double a, double b, double c);
    double getSquare() override;
};


#endif //GEOMETRYLIB_TRIANGLE_H
