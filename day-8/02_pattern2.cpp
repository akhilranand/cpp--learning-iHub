#include<iostream>
int main(){
    std::cout<<0 <<std::endl;
    for(int i = 2 ; i<=4;i++){
        for (int j = 1 ; j<= i ; j++){
            if(i == 2 && j == 2)
                std::cout << 0;
            else if(j==1 || j ==i){
                std::cout<<1;
            }else{
                std::cout<<0;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}