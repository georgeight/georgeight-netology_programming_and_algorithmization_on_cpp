#include <iostream>
#include <cmath>

int main() {
    double v1, a1, v2, a2, S;
    std::cin >> v1 >> a1 >> v2 >> a2 >> S;

    double a = 0.5 * (a1 + a2);
    if (a == 0) {
        std::cout << static_cast<int>(S / (v1 + v2)) << std::endl;
        return 0;
    }
    double b = v1 + v2;
    double c = -S;

    double discriminant = b * b - 4 * a * c;

    if (discriminant <= 0) {
        std::cout << "Тела не встретятся." << std::endl;
        return 0;
    }

    double t1 = (-b + sqrt(discriminant)) / (2 * a);
    double t2 = (-b - sqrt(discriminant)) / (2 * a);

    double t = (t1 > 0) ? t1 : ((t2 > 0) ? t2 : -1);

    if (t < 0) {
        std::cout << "Тела не встретятся." << std::endl;
    } else {
        std::cout << static_cast<int>(t) << std::endl;
    }

    return 0;
}
