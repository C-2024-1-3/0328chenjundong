#include <iostream>

void bubbleSort(double arr[], int size) {
    bool changed;
    do {
        changed = false;
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    double numbers[10];

    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }

    bubbleSort(numbers, 10);

    for (int i = 0; i < 10; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
