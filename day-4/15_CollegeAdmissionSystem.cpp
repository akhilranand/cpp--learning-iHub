// 15. College Admission System
// • Cutoff validation
// • Seat availability
// • Category reservation checking

#include <iostream>

int main(){
    float cgp;
    char Category;
    int seatAvailable;
    std::cout << "enter your cgp : ";
    std::cin >> cgp;

    std::cout << "a ->  Category_1"<<std::endl;
    std::cout << "b ->  Category_2"<<std::endl;
    std::cout << "c ->  Category_3"<<std::endl;
    std::cout << "d ->  Category_4"<<std::endl;

    std::cout << "enter your Category : ";
    std::cin >> Category;

    switch(Category){
        case 'a':
            seatAvailable = 1;
            if(cgp >= 9){
                std::cout <<"seats available : " << seatAvailable; 
            }else{
                std::cout <<"Cutoff not satisfied";
            }
            break;
        case 'b':
            seatAvailable = 2;
                if(cgp >= 8){
                std::cout <<"seats available : " << seatAvailable; 
            }else{
                std::cout <<"Cutoff not satisfied";
            }
            
            break;
        case 'c':
            seatAvailable = 3;
               if(cgp >= 7.5){
                std::cout <<"seats available : " << seatAvailable; 
            }else{
                std::cout <<"Cutoff not satisfied";
            }
            break;
        case 'd':
            seatAvailable = 1;
                if(cgp >= 7){
                std::cout <<"seats available : " << seatAvailable; 
            }else{
                std::cout <<"Cutoff not satisfied";
            }
            break;

            
    }



    

    return 0;
}