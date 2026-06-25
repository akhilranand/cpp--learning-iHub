// #include <iostream>
// int main(){
//     int arr[3][3] = {{1,2,3},
//                     {7,8,9},
//                     {4,5,7}};
//     std::cout << arr[1][2]<<std::endl;

//     std::cout<<std::endl;
//     for(int i = 0; i < 3; i++) {
//         for(int j = i + 1; j < 3; j++) {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }


//         std::cout<<std::endl;
//     for(int i = 0 ; i<3;i++){
//         for(int j = 0 ; j < 3 ; j++){
            
//             std::cout<<arr[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }




//     return 0;
// }


#include <iostream>

int main() {
    int arr[3][3] = {
        {1,2,3},
        {7,8,9},
        {4,5,7}
    };

    int transpose[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[i][j] = arr[j][i];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << transpose[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}