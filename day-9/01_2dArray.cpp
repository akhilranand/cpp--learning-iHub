#include <iostream>
int main(){
    int arr[3][3] = {{1,2,3},
                    {7,8,9},
                    {4,5,7}};
    std::cout << arr[1][2]<<std::endl;

    std::cout<<std::endl;
    for(int i = 0 ; i<3;i++){
        for(int j = 0 ; j < 3 ; j++){
            std::cout<<arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}