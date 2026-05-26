// 9. Bank Loan Approval System
// • Salary validation
// • Age verification
// • Credit score checking

#include <iostream>

int main(){

    int age;
    float salary;
    int creditScore;

    std::cout << "welcome" << std::endl;
    std::cout << "Please enter your age : ";
    std::cin >> age;
    
    if(age>=18 && age <60 ){
        std::cout<<"please enter your salary : ";
        std::cin>>salary;
        if(salary >=20000){
            std::cout<<"please enter your credit score : ";
            std::cin >> creditScore;
            if(creditScore >=650){
                std::cout<<"yes you are eligible for the loan";
            }else{
                std::cout<<"sorry , you are not eligible for the loan.";
            }
        }else{
            std::cout<<"sorry , you are not eligible for the loan.";
        }
    }else{
        std::cout<<"sorry , you are not eligible for the loan.";
    }
    


    return 0;
}