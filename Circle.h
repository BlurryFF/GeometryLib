#ifndef GEOMETRYLIB_CIRCLE_H
#define GEOMETRYLIB_CIRCLE_H

#include "Figure.h"


class Circle : public Figure {
private:
    double radius;

public:
    Circle(double radius);
    double getSquare() override;
};

#endif //GEOMETRYLIB_CIRCLE_H
