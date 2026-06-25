#include <iostream>
int main(){
    int sum = 0;
    int arr[3][3] = {{1,2,3},
                    {7,8,9},
                    {4,5,7}};

    int colSum = 0 ;
    std::cout<<std::endl;

    for(int i = 0 ; i<3;i++){
        int rowSum = 0 ; 

        for(int j = 0 ; j < 3 ; j++){
            rowSum += arr[i][j];
        }
        std::cout << "Row " << i << " Sum = " << rowSum << std::endl;

    }




    for(int i = 0; i < 3; i++) {
    int colSum = 0;

    for(int j = 0; j < 3; j++) {
        colSum += arr[j][i];
    }

    std::cout << "Column " << i << " Sum = " << colSum << std::endl;
}







    return 0;
}