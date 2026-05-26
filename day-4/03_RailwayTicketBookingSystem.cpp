// 3. Railway Ticket Booking System
// • Seat availability check
// • Senior citizen discount
// • Child ticket validation


#include <iostream>
using namespace std;

int main(){

    bool ticketAvailability = true;
    float amount = 1000;
    float childTicketDiscount = 50;
    float childTicketDiscountAmount ;
    float senierDiscoutnt = 10;
    float senierDiscoutntAmount ;
    float finalAmount;
    int age ;

    if(ticketAvailability == true){
        cout << "Welcome" << endl;
        cout << "Please enter your age : ";
        cin >> age;

        if(age < 5){
            cout << "no need of ticket for the child";
        }else if(age >=5 && age < 12){
            cout << "child ticket is allowed ";
            childTicketDiscountAmount = amount*(childTicketDiscount/100);
            finalAmount = amount-childTicketDiscountAmount;
            cout << "your final amount is : "<<finalAmount;
        }else if (age >=60){
            cout << "you are eligible for Senior citizen discount"; 
            senierDiscoutntAmount = amount*(senierDiscoutnt/100);
            finalAmount = amount - senierDiscoutntAmount;
            cout << "your final amount is : "<<finalAmount;
        }else{
            cout << "your amount is : " << amount;
        }
        
    }else{
        cout << "Sorry, seat is not available.";
    }

    return 0;
}