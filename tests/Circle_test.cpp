#define CATCH_CONFIG_MAIN
#include "catch2/catch_all.hpp"
#include "../Circle.h"
#include "../constants.h"

TEST_CASE("Circle creation and validation") {
    // создание окружности с валидным радиусом
    REQUIRE_NOTHROW(Circle(3.0));

    // создание окружности с невалидным радиусом
    REQUIRE_THROWS_AS(Circle(0.0), std::invalid_argument);
    REQUIRE_THROWS_AS(Circle(-1.0), std::invalid_argument);
}

TEST_CASE("Circle area calculation"){
    // создание окружности
    Circle circle(5.0);

    // ожидаемая площадь
    double expectedArea = kPi * 5.0 * 5.0;
    REQUIRE(circle.getSquare() == Catch::Approx(expectedArea).epsilon(0.001));
}
