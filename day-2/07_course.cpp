#include<iostream>
using namespace std;
int main(){



    float gst = 5;
    int duration;
    float durationAmount;
    float fee;
    float totalFee;
    char course;
    float addGstAmount;
    

    cout << "Welcome" <<endl;

    cout << "course list" <<endl;
    cout << "A -> c++" <<endl;
    cout << "B -> Python" <<endl;
    cout << "C -> C" <<endl;
    cout << "D -> Java" <<endl;
    cout << "E -> JavaScript" <<endl;

    cout << "select a course : ";
    cin >> course ;


    switch(course){
        case 'a':
            fee = 14000;
            cout << "course fee : " << fee <<endl;
            cout << "Enter the duration of course (permonth 1000+) : ";
            cin >> duration ;
            durationAmount = fee+(duration*1000);
            addGstAmount = durationAmount*(gst/100);
            totalFee = durationAmount+addGstAmount;
            cout << "the total fee is : "<<totalFee;
            break;

        case 'b':
          fee = 27000;
            cout << "course fee : " << fee <<endl;
            cout << "Enter the duration of course (permonth 1000+) : ";
            cin >> duration ;
            durationAmount = fee+(duration*1000);
            addGstAmount = durationAmount*(gst/100);
            totalFee = durationAmount+addGstAmount;
            cout << "the total fee is : "<<totalFee;
            break;

        case 'c':
            fee = 10000;
            cout << "course fee : " << fee <<endl;
            cout << "Enter the duration of course (permonth 1000+) : ";
            cin >> duration ;
            durationAmount = fee+(duration*1000);
            addGstAmount = durationAmount*(gst/100);
            totalFee = durationAmount+addGstAmount;
            cout << "the total fee is : "<<totalFee;
            break;
            
        case 'd':
            fee = 50000;
            cout << "course fee : " << fee <<endl;
            cout << "Enter the duration of course (permonth 1000+) : ";
            cin >> duration ;
            durationAmount = fee+(duration*1000);
            addGstAmount = durationAmount*(gst/100);
            totalFee = durationAmount+addGstAmount;
            cout << "the total fee is : "<<totalFee;
            break;

        case 'e':
            fee = 20000;
            cout << "course fee : " << fee <<endl;
            cout << "Enter the duration of course (permonth 1000+) : ";
            cin >> duration ;
            durationAmount = fee+(duration*1000);
            addGstAmount = durationAmount*(gst/100);
            totalFee = durationAmount+addGstAmount;
            cout << "the total fee is : "<<totalFee;
            break;

        default:
            cout << "invalid";
            
    }

   




    return 0;
}