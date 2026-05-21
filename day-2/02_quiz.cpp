#include<iostream>
using namespace std;
int main(){
    char selected_option1;
    char selected_option2;
    char selected_option3;
    int score = 0;



    cout << "Q1-> what is 5x8 : ";
    cout <<"options : " << endl;
    cout <<"A : 25" << endl;
    cout <<"B : 60" << endl;
    cout <<"C : 35" << endl;
    cout <<"D : 40" << endl;
    cout <<"Select your option : ";
    cin >> selected_option1;


    cout << "Q2-> what is 4x6 : ";
    cout <<"options : " << endl;
    cout <<"A : 15" << endl;
    cout <<"B : 24" << endl;
    cout <<"C : 34" << endl;
    cout <<"D : 60" << endl;
    cout <<"Select your option : ";
    cin >> selected_option2;


    cout << "Q3-> what is 9x4 : ";
    cout <<"options : " << endl;
    cout <<"A : 36" << endl;
    cout <<"B : 40" << endl;
    cout <<"C : 15" << endl;
    cout <<"D : 24" << endl;
    cout <<"Select your option : ";
    cin >> selected_option3;






    if(selected_option1=='d' || selected_option1 == 'D'){
        cout << "Wow your answer is correct"<<endl;
        score += 1;
    }else{
        cout << "Sorry your answer is wrong"<<endl;
    }


    if(selected_option2=='b' || selected_option1 == 'B'){
        cout << "Wow your answer is correct"<<endl;
        score += 1;
    }else{
        cout << "Sorry your answer is wrong"<<endl;
    }


    if(selected_option3=='a' || selected_option1 == 'A'){
        cout << "Wow your answer is correct"<<endl;
        score += 1;
    }else{
        cout << "Sorry your answer is wrong"<<endl;
    }


    cout << "your score is :" << score <<"/3";




    
    return 0;
}