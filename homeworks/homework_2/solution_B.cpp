#include <iostream>
#include <cmath>


int main() {
    int N;
    std::cin >> N;
    int N_copy = N;

    int max_value = 0;
    int i = 0;
    while (pow(16, i) <= N) {
        int value;
        if (N >= pow(16, i+1)) {
            value = N % (int)pow(16, i+1) / int(pow(16, i));
            N -= N % (int)pow(16, i);
        } else {
            value = N / (int)pow(16, i);
        }

        max_value = (value > max_value) ? value : max_value;
    
        i++;
    }


    int result;
    if (max_value < 10) {
        result = N_copy * 2;
    } else if (max_value == 10 || max_value == 13) {
        result = (int)((float)N_copy / 10);
    } else if (max_value == 11 || max_value == 12) {
        int target_pow = pow(10, std::to_string(N_copy).length()-1);
        int first_digit = N_copy / target_pow;
        int last_digit = N_copy % 10;
        int mid_part = N_copy - first_digit * target_pow - last_digit;
        result = last_digit * target_pow + mid_part + first_digit;
    } else if (max_value == 14) {
        result = N_copy + 1;
    } else {
        int sum_of_digits = 0;
        long long temp = N_copy;
        while (temp > 0) {
            sum_of_digits += temp % 10;
            temp /= 10;
        }
        result = N_copy + sum_of_digits;
    }

    std::cout << result << std::endl;

    return 0;
}
