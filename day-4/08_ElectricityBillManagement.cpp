#include <iostream>
using namespace std;

int main(){

    string name;
    int id;
    int units;
    int charges;
    int billAmount = 0;
    int finalBillAmount;
    float surcharge;

    cout << "Enter Consumer Name : ";
    cin >> name;
    cout << "Enter Consumer ID : ";
    cin >> id;
    cout << "Enter Unit Consumed : ";
    cin >> units;


    if(units <= 100){
        charges = 2;
    }else if(units >= 101 && units <=200){
        charges = 3;
    }else if(units >=201 && units <= 500){
        charges = 5;
    }else {
        charges = 7;
    }

    for(int i = 1 ; i<=units;i++){
        billAmount += charges;
    }


    if(billAmount > 5000){
        cout << "Surcharge Applied";
        surcharge = billAmount*(10/100);
        finalBillAmount = billAmount + surcharge;
        cout << "the final bill amount is : "<< finalBillAmount;
        
    }else{
        cout<<"No Surcharge Applied";
        cout << "the final bill amount is : "<< billAmount;
    }





    return 0;
}