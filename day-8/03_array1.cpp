#include <iostream>

int main() {
    int num;

    std::cout << "Enter the size of array: ";
    std::cin >> num;

    int arr[num];

    for(int i = 0; i < num; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }

    for(int i = 0; i < num; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}