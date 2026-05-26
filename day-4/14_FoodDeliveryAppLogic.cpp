// 14. Food Delivery App Logic
// • Restaurant availability
// • Delivery distance checking
// • Free delivery eligibility


#include<iostream>
using namespace std;
int main(){

    float total;
    int initial_amount;
    char item ;
    int qty;
    float distance;
    float delivery = 10;
    float deliveryAmount;
    bool isRestaurantAvailable = true;
    cout << "A-> cake    -> 50 " <<endl;
    cout << "B-> chips   -> 25" <<endl;
    cout << "C-> water   -> 20" <<endl;
    cout << "D-> dosa    -> 8" <<endl;
    cout << "E-> tea     -> 10" <<endl; 

    cout<<"chose an item : ";
    cin >> item;
    cout<<"enter the distance : ";
    cin >> distance;

   if(isRestaurantAvailable == true){
     if(item == 'a'){
        initial_amount = 50;
        cout << "enter the quantity : ";
        cin >> qty;
       
        if(distance <= 1){
            cout<<"free delevery Available";
             total = initial_amount * qty;
             cout << "the total is : "<<total;
        }else{
            deliveryAmount = delivery*distance;
             total = initial_amount * qty + deliveryAmount;
             cout << "the total is : "<<total;
        }
    }else if(item == 'b'){
        initial_amount = 25;
        cout << "enter the quantity : ";
        cin >> qty;
        if(distance <= 1){
            cout<<"free delevery Available";
             total = initial_amount * qty;
             cout << "the total is : "<<total;
        }else{
            deliveryAmount = delivery*distance;
             total = initial_amount * qty + deliveryAmount;
             cout << "the total is : "<<total;
        }
    }else if(item == 'c'){
        initial_amount = 20;
        cout << "enter the quantity : ";
        cin >> qty;
       if(distance <= 1){
            cout<<"free delevery Available";
             total = initial_amount * qty;
             cout << "the total is : "<<total;
        }else{
            deliveryAmount = delivery*distance;
             total = initial_amount * qty + deliveryAmount;
             cout << "the total is : "<<total;
        }
    }else if(item == 'd'){
        initial_amount = 8;
        cout << "enter the quantity : ";
        cin >> qty;
        if(distance <= 1){
            cout<<"free delevery Available";
             total = initial_amount * qty;
             cout << "the total is : "<<total;
        }else{
            deliveryAmount = delivery*distance;
             total = initial_amount * qty + deliveryAmount;
             cout << "the total is : "<<total;
        }
    }else if(item == 'e'){
        initial_amount = 10;
        cout << "enter the quantity : ";
        cin >> qty;
        if(distance <= 1){
            cout<<"free delevery Available";
             total = initial_amount * qty;
             cout << "the total is : "<<total;
        }else{
            deliveryAmount = delivery*distance;
             total = initial_amount * qty + deliveryAmount;
             cout << "the total is : "<<total;
        }
    }

   }else{
    cout << "sorry No restorent available";
   }
     



    return 0;
}