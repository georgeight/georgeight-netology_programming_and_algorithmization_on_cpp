#include <iostream>
#include <cmath>

int main(){
    float x_A, y_A, x_B, y_B, x_C, y_C;


    std::cout << "Введите координату x точки A: ";
    std::cin >> x_A;
    
    std::cout << "Введите координату y точки A: ";
    std::cin >> y_A;

    std::cout << "Введите координату x точки B: ";
    std::cin >> x_B;
    
    std::cout << "Введите координату y точки B: ";
    std::cin >> y_B;

    std::cout << "Введите координату x точки C: ";
    std::cin >> x_C;
    
    std::cout << "Введите координату y точки C: ";
    std::cin >> y_C;


    float AB = sqrt(pow(x_A - x_B, 2) + pow(y_A - y_B, 2));
    float BC = sqrt(pow(x_B - x_C, 2) + pow(y_B - y_C, 2));
    float AC = sqrt(pow(x_A - x_C, 2) + pow(y_A - y_C, 2));


    float half_perimeter = (AB + BC + AC) / 2;
    float square = sqrt(
        half_perimeter * (half_perimeter - AB) * (half_perimeter - BC) * (half_perimeter - AC)
    );


    std::cout << "Периметр треугольника: " << half_perimeter * 2 << "\n";
    std::cout << "Площадь треугольника: " << square << "\n";


    return 0;
}
