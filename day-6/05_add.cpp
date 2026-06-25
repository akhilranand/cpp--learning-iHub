#include<iostream>

int add(int a,int b){
    return a+b;
}
void sub(int a , int b){
    std::cout<<a-b<<std::endl;
}

int main(){

    std::cout<<add(5,10) <<std::endl;

    sub(10,7);
    return 0;
}