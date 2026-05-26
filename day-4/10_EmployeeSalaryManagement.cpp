// 10. Employee Salary Management
// • Bonus calculation
// • Tax deduction
// • Overtime salary 

#include <iostream>
#include<string>


int main(){

    std::string name;
    float salary ;
    float overtimePay = 200;
    float totalOvertimePay ;
    int overtimeHour;
    float bonus;
    float bonusAmount;
    float tax = 10;
    float taxAmount;
    float amountBeforeTax;
    float finalAmount;
    

    std::cout << "Enter Your Name : ";
    getline(std::cin, name);
    std::cout << "Enter Your Salary : ";
    std::cin >> salary;
    std::cout << "Enter Your Overtime Hour : ";
    std::cin >> overtimeHour;

    if(salary > 50000){
        bonus = 10;
    }else{
        bonus = 5;
    }
    bonusAmount = salary*(bonus/100);
    totalOvertimePay = overtimePay*overtimeHour;
    amountBeforeTax = salary+totalOvertimePay+bonusAmount;
    taxAmount = amountBeforeTax*(tax/100);
    finalAmount = amountBeforeTax-taxAmount;

    std::cout << "Name : " << name <<std::endl;
    std::cout << "The final amount is : "<< finalAmount;


    return 0;
}