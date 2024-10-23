#include <cstdlib>
#include <ctime>
#include <iostream>

void print_array(const int* const arr, const int size);
void reverse_array(int* const arr, const int size);

int main() {
    const int arr_size = 20;
    int arr[arr_size];

    std::cout << "Исходный массив: ";
    std::srand(std::time(nullptr));
    for (int i = 0; i < arr_size; ++i) {
        arr[i] = std::rand() % 20;
    }
    print_array(arr, arr_size);

    reverse_array(arr, arr_size);

    std::cout << "Перевёрнутый массив: ";
    print_array(arr, arr_size);


    return 0;
}
void print_array(const int* const arr, const int size) {
    static const char format = ' ';
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << format;
    }
    std::cout << std::endl;
}

void reverse_array(int* const arr, const int size) {
    const int halfSize = size / 2;
    for (int i = 0; i < halfSize; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
