// 16. Fuel Station Billing System
// • Fuel type selection
// • Quantity calculation
// • Discount management

#include <iostream>

int main()
{

    char fuealType;
    float fuealPrice;
    float amount;
    float literPerAmount;
    float discount = 5;
    float discuontedAmount;
    float freeLiter;
    float fuealPriceForLiter;
    float totalPrice;
    float costPerLiter;

    std::cout << "a-> Petrol - 114.52" << std::endl;
    std::cout << "b-> Diesel - 103.34" << std::endl;
    std::cout << "select fueal type : ";
    std::cin >> fuealType;
    if (fuealType == 'a')
    {
        fuealPrice = 114.52;
        std::cout << "Enter the amount : ";
        std::cin >> amount;
       

        if(amount > 1500){
            literPerAmount = amount/fuealPrice;
            fuealPriceForLiter = literPerAmount*fuealPrice;
            discuontedAmount = fuealPriceForLiter*(discount/100);


            freeLiter = discuontedAmount/fuealPrice;
            std::cout <<"you got "<<literPerAmount << " liter of "<< fuealType <<" and + "<<freeLiter << " liters discount" ;

        }else{
             literPerAmount = amount/fuealPrice;
             fuealPriceForLiter = literPerAmount*fuealPrice;
              std::cout <<"you got "<<literPerAmount << " liters of "<<fuealType ;
        }

    }
    else if (fuealType == 'b')
   {
        fuealPrice = 103.34;
        std::cout << "Enter the amount : ";
        std::cin >> amount;
       

        if(amount > 1500){
            literPerAmount = amount/fuealPrice;
            fuealPriceForLiter = literPerAmount*fuealPrice;
            discuontedAmount = fuealPriceForLiter*(discount/100);



            freeLiter = discuontedAmount/fuealPrice;
            std::cout <<"you got "<<literPerAmount << " liter of "<< fuealType <<" and + "<<freeLiter << " liters discount" ;

        }else{
             literPerAmount = amount/fuealPrice;
             fuealPriceForLiter = literPerAmount*fuealPrice;
              std::cout <<"you got "<<literPerAmount << " liters of "<<fuealType ;
        }

    }

    return 0;
}

