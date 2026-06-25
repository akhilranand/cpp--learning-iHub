#include <iostream>

int main(){
    int sum = 0;
    int arr[5]={1,3,5,2,3};
    for(int i = 0 ; i<5;i++){
        sum +=arr[i] ;
    }
    std::cout<<sum;
    return 0;
}