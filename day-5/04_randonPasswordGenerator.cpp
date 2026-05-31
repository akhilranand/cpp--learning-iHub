#include <iostream>
#include <cstdlib>
#include<ctime>


int main(){
    srand(time(0));
    int len;
    std::string password;
    std::cout << "Enter the number of digits needed for your password : ";
    std::cin>>len;
    std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*?.,1234567890";

    //std::cout << chars.length() << std::endl;

    for(int i =1 ; i<= len;i++){
        
        password += chars[rand() % chars.length()] ;
       
    }

    std::cout << "password : "<< password <<std::endl;
    std::cout << std::endl;

   

    return 0;
}