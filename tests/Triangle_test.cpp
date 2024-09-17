#define CATCH_CONFIG_MAIN
#include "catch2/catch_all.hpp"
#include "../Triangle.h"


TEST_CASE("Triangle creation and validation") {
    // создание ваилдного треугольника
    REQUIRE_NOTHROW(Triangle(3.0, 4.0, 5.0));

    // проверка на исключения при создании невалидного треугольника
    REQUIRE_THROWS_AS(Triangle(1.0, 2.0, 10.0), std::invalid_argument);
    REQUIRE_THROWS_AS(Triangle(-1.0, 4.0, 5.0), std::invalid_argument);
    REQUIRE_THROWS_AS(Triangle(0.0, 4.0, 5.0), std::invalid_argument);
}

TEST_CASE("Triangle area calculation") {
    // создание треугольника
    Triangle triangle(3.0, 4.0, 5.0);

    // ожидаемая площадь
    double expectedArea = 6.0;
    REQUIRE(triangle.getSquare() == Catch::Approx(expectedArea).epsilon(0.001));

    // создание прямоугольного треугольника
    Triangle triangle1(6.0, 8.0, 10.0);

    // ожидаемая площадь
    double expectedArea1 = 24.0;
    REQUIRE(triangle1.getSquare() == Catch::Approx(expectedArea1).epsilon(0.001));
}

TEST_CASE("Right-angled triangle") {
    // создание прямоугольного треугольника
    Triangle triangle(3.0, 4.0, 5.0);
    REQUIRE(triangle.isRightTriangle() == true);

    // создание непрямоугольного треугольника
    Triangle nonRightTriangle(3.0, 5.0, 5.0);
    REQUIRE(nonRightTriangle.isRightTriangle() == false);
}


