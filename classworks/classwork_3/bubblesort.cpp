#include <iostream>
#include <numeric>

int main(){
    const std::size_t size = 5;
    const std::size_t buffer_size = 1024; // Размер массива

    int buffer[buffer_size]{}; // Создание и инициализация массива buffer

    // Заполнение массива buffer последовательными значениями, начиная с 1
    // Используется функция std::iota стандартной библиотеки
    std::iota(buffer, buffer + size, 1);

    // Полный обход массива в двойном вложенном цикле и сортировка в порядке убывания
    // Если какие-то элементы неправильно расположены, происходит обмен местами - функция std::swap
    for (std::size_t i = 0; i < size - 1; ++i)
    {
        for (std::size_t j = i + 1; j < size; ++j)
        {
            if (buffer[i] < buffer[j]) std::swap(buffer[i], buffer[j]);
        }
    }
}
