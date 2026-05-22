#include <iostream>
using namespace std;

int main(){


    char action;
    int quantity;
    cout << "A-> Add product"<<endl;
    cout << "B-> Delete product"<<endl;
    cout << "C-> View Cart"<<endl;
    cout << "D-> Exit"<<endl;
    
    cout << "Enter your choice : ";
    cin >> action;
    if(action == 'a'){
        cout << "enter the quantity : ";
        cin >> quantity;
    }

    switch(action){
        case 'a':
            cout << "product added to cart"<<endl;
            cout << "quantity is : "<<quantity << endl;
            break;
        case 'b':
            cout << "product removed from cart"<<endl;
            break;
        case 'c':
            cout << "cart"<<endl;
            break;
        case 'd':
            cout << "Exit"<<endl;   
            break;      
        default:
            cout << "invalid" <<endl;   
            break;    
    }


    return 0;
}