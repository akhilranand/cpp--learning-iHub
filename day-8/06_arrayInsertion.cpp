// #include <iostream>

// int main() {
//     int arr[10] = {1, 2, 3, 4, 5};
//     int size = 5;  
//     int newElement = 6;

//     arr[size] = newElement; 
//     size++;

//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }




// #include <iostream>

// int main() {
//     int arr[10] = {1, 2, 3, 4, 5};
//     int size = 5;

//     int newElement = 0;

//     // Shift right
//     for (int i = size; i > 0; i--) {
//         arr[i] = arr[i - 1];
//     }

//     // Insert at beginning
//     arr[0] = newElement;
//     size++;

//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }




#include <iostream>

int main() {
    int arr[10] = {1, 2, 4, 5};
    int size = 4;

    int index = 2;
    int newElement = 3;

    // Shift right
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert
    arr[index] = newElement;
    size++;

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}