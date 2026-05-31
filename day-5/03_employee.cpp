#include <iostream>

int main(){
    float salary;
    float da= 10;
    float hra=20;

    float daAmountOfsalary;
    float hraAmountOfsalary;

    float totalPay;

    char nextEmployee;


    do{
        std::cout<<"Enter your base pay : ";
        std::cin >> salary;
        daAmountOfsalary = (salary*da)/100;
        hraAmountOfsalary = (salary*hra)/100;
        totalPay = salary+daAmountOfsalary+hraAmountOfsalary;
        std::cout << "your total salary is : "<<totalPay<<std::endl;
        std::cout << "Is there any more Employee (y/n) : ";
        std::cin >> nextEmployee;
        
    }while(nextEmployee == 'y');
    
    
    return 0;
}