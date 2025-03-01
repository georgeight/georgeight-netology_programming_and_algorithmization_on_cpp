#include <iostream>

int main() {
    const std::size_t size = 5;
    // Создание динамического массива целых чисел размером size
    // Массив инициализируется нулями
    const auto array = new int[size]{};

    const auto middle = size / 2;
    
    array[middle] = 42;

    // Обход массива в цикле и вывод всех элементов массива
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << (i + 1 == size ? '\n' : ' '); // output: 0 0 42 0 0
    }

    // Удаление выделенной памяти для одиночного объекта - это некорректное использование delete
    // delete array; // Warning

    // Правильное освобождение памяти
    delete[] array;
}
