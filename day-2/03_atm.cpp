#include<iostream>
using namespace std;
int main(){

    int pinNum;
    float balance = 10568.23;
    float deposite;
    float withdraw;
    char optionSelected;
    string exit;




    cout << "Welcome to ATM " << endl;
    cout << "Enter your pin : ";
    cin >> pinNum;
    if (pinNum == 4562){
        cout << "Login Success"<<endl;
        cout << "select feature"<<endl;
        cout << "A-> Check balance"<<endl;
        cout << "B-> Deposite "<<endl;
        cout << "C-> Withdraw "<<endl;
        cout << "D-> Exit "<<endl;

        cout << "Select an option : ";
        cin >> optionSelected;

        if(optionSelected == 'A' || optionSelected == 'a'){
            cout << "Balance -> "<< balance <<endl;
        }else if(optionSelected == 'B' || optionSelected == 'b'){
            cout << "Enter the amount to be deposited : ";
            cin >> deposite;
            balance = balance + deposite;
            cout << "now your available balance : "<<balance<<endl;
        }else if(optionSelected == 'C' || optionSelected == 'c'){
            cout << "Enter the amount to withdraw : ";
            cin >> withdraw;
            balance = balance - withdraw;
            cout << "now your available balance : "<<balance<<endl;
        }else if(optionSelected == 'D' || optionSelected == 'd'){
            cout << " Thank you ";
        }

    }else{
        cout<<"Login Failed";
    }
    
    


    return 0;
}