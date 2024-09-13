# GeometryLib
Библиотека для вычисления площади круга по радиусу и треугольника по трем сторонам.
# Как запустить?
1. Клонируйте репозиторий.
2. Соберите библиотеку.
3. Чтобы подключить библиотеку к проекту, добавьте в CMakeList
```c++
target_link_libraries(<ProjectName> "путь к скомпилированной библиотеке GeometryLib")
```
____

Пример использования:

```c++
#include <iostream>
#include "../GeometryLib/GeometryLib.h"

int main() {
    Circle circle(5.0);
    Triangle triangle (3,4,5);
    std::cout << circle.getSquare() << std::endl;
    std::cout << triangle.getSquare() << std::endl;
    if (triangle.isRightTriangle()){
        std::cout << "the triangle is right-angled";
    } else {
        std::cout << "the triangle is not a right triangle";
    }
    return 0;
}
```

____

# Figure.h

Базовый класс для всех фигур в библиотеке. Содержиит виртуальный метод для вычисления площади, который должен быть переопределен в классах-наследниках.

```c++
virtual double getSquare() = 0;
```
Метод возвращает площадь фигуры.

____
# Circle.h

Класс Circle представляет окружность. Наследуется от базового класса Figure.

1. Конструктор

```c++
Circle(double radius);
```

Создает объект окружности с заданным радиусом.

2. getSquare()
```c++
double getSquare() override;
```

Вычисляет и возвращает площадь окружности.

____

# Triangle.h

Класс Triangle представляет треугольник. Наследуется от базового класса Figure.

1. Конструктор

```c++
Triangle(double a, double b, double c);
```

Создает объект треугольника с заданными сторонами.

2. isTriangle(double& a, double& b, double& c)
```c++
bool isTriangle(double& a, double& b, double& c) const
```
Проверяет, является ли набор длин сторон допустимым для треугольника. 

3. isRightTriangle()
```c++
bool isRightTriangle() const
```
Проверяет, является ли треугольник прямоугольным.

4. getSquare()
```c++
double getSquare() override
```
Возвращает площадь треугольника.

____

# constants.h

Хранит константы, используемые в библиотеке.

```c++
constexpr double kPi = 3.14159265358979323846;
```
____

#GeometryLib.h

Единый заголовочный файл для библиотеки.
