// 6. Smart Traffic Signal System
// • Traffic light conditions
// • Ambulance priority system

#include <iostream>
int main(){
    
    char trafficType;
    
    std::cout << "a -> Normal traffic "<<std::endl;
    std::cout << "b -> High traffic "<<std::endl;
    std::cout << "c -> Ambulance Detected  "<<std::endl;
    std::cout << "Enter the traffic type : ";

    std::cin >> trafficType;

    std::cout << std::endl;

    switch (trafficType)
    {
    case 'a':
        std::cout << "Normal traffic"<<std::endl;
        std::cout << "Red    -> Default timing"<<std::endl;
        std::cout << "Yellow -> Default timing"<<std::endl;
        std::cout << "Green  -> Default timing"<<std::endl;
        
        
        break;
    case 'b':
        std::cout << "High traffic"<<std::endl;
        std::cout << "Red    -> Default timing"<<std::endl;
        std::cout << "Yellow -> Default timing"<<std::endl;
        std::cout << "Green  -> Extra time timing"<<std::endl;
        

     case 'c':
        std::cout << "Ambulance Detected"<<std::endl;   
        std::cout << "Green -> on Ambulance Road"<<std::endl; 
        std::cout << "Red   -> on other Road"<<std::endl; 

    default:
        break;
    }

    return 0;
}