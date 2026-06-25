#include<iostream>

int factorial(int a){
    int num = 1;
    for(int i = 1;i<=a;i++){
        num*=i;
    }
    return num;

}

int main(){

    int input;
    std::cout<<"enter the number : ";
    std::cin >> input;
    std::cout<<factorial(input)<<std::endl;




    return 0;
}