// 4. Hospital Appointment System
// • Doctor availability
// • Emergency priority
// • Token generation

#include <iostream> 

int main(){

    double isDoctorAvailable = true;
    char priority ;
    int tocken;

    if(isDoctorAvailable == true){
        std::cout << "Doctor is available" << std::endl;
        std::cout << "enter the priority (l,m,h) : ";
        std::cin >> priority;

        switch(priority){
            case 'h' :
                std::cout << "Emergency is High" <<std::endl;
                tocken = 1;
                std::cout << "your tocken is : " << tocken << std::endl;
                break;
            case 'm' :   
                std::cout << "Emergency is Medium" <<std::endl;
                tocken = 2;
                std::cout << "your tocken is : " << tocken << std::endl; 
                break;
            case 'l':
                std::cout << "Emergency is Low" <<std::endl;
                tocken = 3;
                std::cout << "your tocken is : " << tocken << std::endl;  
                break;  

        }
    }else{
        std::cout << "Sorry, Doctor is not available";
    }



    return 0;
}