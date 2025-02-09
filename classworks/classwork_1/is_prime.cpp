#include <iostream>
#include <cmath>

bool prime(int n);

int main(){
    int N;
    std::cout << "Введите число: ";
    std::cin >> N;
    if (prime(N))
        std::cout << N << " простое число\n";
    else
        std::cout << N << " не является простым числом\n";
}


bool prime(int n) {
    int m = sqrt(n) + 1, i = 2;
    for(; i < m && n % i; i++);
    return n > 1 && i == m;
}
