#include <iostream>

int main() {

    int arr[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };


    for(int i = 0 ; i< 2;i++){
        std::cout << "Layer : " << i+1<<std::endl;
        for(int j = 0 ; j < 2 ; j++){
            for(int k = 0;k < 2 ; k++){
                std::cout<<arr[i][j][k];
            }
            std::cout<<std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}