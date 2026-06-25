#include <iostream>

int main() {

    int arr[3][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        },
        {
            {9, 10},
            {11, 12}
        }
    };

    float sum = 0;
    float count = 0;

    

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j< 2 ; j++){
            for(int k = 0 ; k < 2 ; k ++){
                sum += arr[i][j][k];
                count ++;
            }
        }
    }

    float avg = sum/count;

    std::cout << "avarage = " << avg << std::endl;

    return 0;
}