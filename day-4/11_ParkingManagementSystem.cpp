// 11. Parking Management System
// • Parking slot checking
// • Vehicle type validation
// • Charge calculation

#include <iostream>
#include <string>
int main(){

    bool isParkingslotAvail = true;
    char vehicleCategory;
    float s_category = 100;
    float m_category = 200;
    float l_category = 300;
    float parkingHour;
    float totalAmount;

    if (isParkingslotAvail){
        std::cout<<"vehicle category (s,m,l): ";
        std::cin >> vehicleCategory;

        switch(vehicleCategory){
            case 's':
                std::cout <<"Enter the Parking hour : ";
                std::cin >> parkingHour;
                totalAmount = parkingHour*s_category;
                std::cout << "your total parking fee is : "<< totalAmount;
                break;
            case 'm':
                std::cout <<"Enter the Parking hour : ";
                std::cin >> parkingHour;
                totalAmount = parkingHour*m_category;
                std::cout << "your total parking fee is : "<< totalAmount;   
                break;             
            case 'l':
                std::cout <<"Enter the Parking hour : ";
                std::cin >> parkingHour;
                totalAmount = parkingHour*l_category;
                std::cout << "your total parking fee is : "<< totalAmount;
                break;

        }

    }else{
        std::cout<<"sorry, no slot available.";
    }

    


    return 0;
}