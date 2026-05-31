#include <iostream>
#include <cstdlib>
#include <ctime>


int main(){
    srand(time(0));
    int num;
    int randomNum = rand()%20+1;
    std::cout << randomNum ;

    do{
        std::cout << "enter a number : ";
        std::cin >> num;
        if(num < randomNum){
            std::cout<<"too low" << std::endl;
        }else if(num>randomNum){
            std::cout << "too high"<<std::endl;
        }else if(num == randomNum){
            std::cout << "yes ,you won"<<std::endl;
        }
    }while(num != randomNum);




    return 0;
}