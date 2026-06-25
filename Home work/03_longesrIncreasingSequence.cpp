#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5};
    int n = 8;

    int currentLength = 1;
    int maxLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLength++;
        } else {
            currentLength = 1;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    cout << "Length = " << maxLength;

    return 0;
}