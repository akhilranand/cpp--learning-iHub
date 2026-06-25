#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 0, 2, 0, 4};
    int n = 5;

    int water = 0;

    for (int i = 1; i < n - 1; i++) {

        int leftMax = arr[i];
        for (int j = 0; j < i; j++) {
            if (arr[j] > leftMax)
                leftMax = arr[j];
        }

        int rightMax = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > rightMax)
                rightMax = arr[j];
        }

        int minHeight = min(leftMax, rightMax);

        water += minHeight - arr[i];
    }

    cout << "Water trapped = " << water << " units";
}