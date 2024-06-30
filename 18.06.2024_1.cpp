#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Введение массива из 15 вещественных чисел
    std::vector<double> originalArray = { 12.5, -5.3, 25.7, -17.4, 10.0, 35.2, 8.9, -19.3, 22.6, 18.1, 23.4, 30.9, -14.2, 16.8, -7.6 };

    std::vector<double> firstArray;
    std::vector<double> secondArray;


    // Разделение элементов по модулю
    for (double num : originalArray) {
        if (std::abs(num) < 20) {
            firstArray.push_back(num);
        }
        else {
            secondArray.push_back(num);
        }
    }

    // Поиск максимального элемента в первом и минимального во втором массиве
    double maxFirst = *std::max_element(firstArray.begin(), firstArray.end());
    double minSecond = *std::min_element(secondArray.begin(), secondArray.end());

    // Обмен максимального и минимального элементов
    std::replace(firstArray.begin(), firstArray.end(), maxFirst, minSecond);
    std::replace(secondArray.begin(), secondArray.end(), minSecond, maxFirst);

    // Вывод обновленных массивов

    std::cout << "First Array: ";
    for (double num : firstArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Второй Аррай: ";
    for (double num : secondArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
