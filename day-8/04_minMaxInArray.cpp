#include<iostream>
#include <array>
int main(){
 
    int arr[10] = {1,45,6,84,12,45,32,22,4,46};
    int max = arr[0];
    int min = arr[0];

    for(int i = 0 ; i < 10 ; i++){
        if(arr[i]>max){
            max = arr[i];
        }

          if(arr[i] < min){
            min = arr[i];
          }  



    }
    std::cout<<max<<std::endl;
    std::cout<<min;

    return 0;
}