// 12. Mobile Recharge System
// • Plan selection
// • Balance checking
// • Cashback offers

#include <iostream>

int main(){

    float wallet = 500;
    float bill;
    char plan;

    
    std::cout<<"a -> data - 1.50 Gb -> [Rs:149] " <<std::endl;
    std::cout<<"b -> data - 2.00 Gb -> [Rs:199] "<<std::endl;
    std::cout<<"c -> data - 2.50 Gb -> [Rs:249] "<<std::endl;
    std::cout<<"d -> data - 5.00 Gb -> [Rs:699] "<<std::endl;
    std::cout<<"e -> Balance checking "<<std::endl;
    std::cout<<"f -> Cashback offers "<<std::endl;

    std::cout<<"Select a plan : ";
    std::cin >> plan;

    switch (plan)
    {
    case 'a':
        bill = 149;
        if(bill < wallet){
            wallet -= bill;
            std::cout << "Recharge success." <<" Balance : "<<wallet;

        }else{
            std::cout<<"sorry, no sufficent balance in wallet";
        }
        break;

    case 'b':
        bill = 199;
        if(bill < wallet){
            wallet -= bill;
             std::cout << "Recharge success." <<" Balance : "<<wallet;
        }else{
            std::cout<<"sorry, no sufficent balance in wallet";
        }
        break;
    case 'c':
        bill = 249;
        if(bill < wallet){
            wallet -= bill;
             std::cout << "Recharge success." <<" Balance : "<<wallet;
        }else{
            std::cout<<"sorry, no sufficent balance in wallet";
        }
        break;
    case 'd':
        bill = 699;
        if(bill < wallet){
            wallet -= bill;
             std::cout << "Recharge success." <<" Balance : "<<wallet;
        }else{
            std::cout<<"sorry, no sufficent balance in wallet";
        }
        break;      
    case 'e':
        std::cout<<"Balance in wallet is : "<<wallet;
        break;
    case 'f':
        std::cout<<"50% discound on wifi "<<wallet;
        break;                          
    
    default:
        break;
    }
    




    

    return 0;
}