#include <iostream>
#include <cmath>

//zadanie1
#define y1 2
#define z1 4
#define t1 sin(2+z1)
#define x1 6*(t1*t1)-(z1+1)/2*(y1*y1)
#define RESULT1 std::cout << "Значение x: " << x1 << std::endl;

//zadanie2
#define x2 2.87
#define y2 0.84
#define z2 (2*x2*y2)/(x2+cos(y2))
#define b2 (sqrt(x2*sin(2))*y2)/(z2+pow(E,x2)*y2)
#define RESULT2 std::cout << "Значение b: " << b2 << std::endl;


const double PI = 3.141592653589793;
const double E = 2.7182818284;

double Zadanie3(double a) {
    double dividend = sin((PI / 2) + 3 * a);
    double divider = 1 - sin(3 * a - PI);
    return dividend / divider;
}

int main() {
    setlocale(LC_ALL, "ru");
    RESULT1;
    RESULT2;

    std::cout << "Введите значение a"<<std::endl;
    double a;
    std::cin >> a;
    std::cout << "Значение y: " << Zadanie3(a);
}



