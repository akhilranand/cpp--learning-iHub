#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 2, 2};
    int size = 5;

    int totalSum = 0;

    for(int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < size; i++) {
        totalSum -= arr[i]; // now totalSum = rightSum

        if(leftSum == totalSum) {
            cout << "Equilibrium Index: " << i << endl;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << "No Equilibrium Index Found";
}