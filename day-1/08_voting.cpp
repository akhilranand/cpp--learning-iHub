#include<iostream>
using namespace std;
int main(){

    int age;
    cout << "Please enter your age : ";
    cin >> age;

    if(age >= 18 && age <150){
        cout << "you are " << age << " years old and so you can vote";
    }else if(age <= 0 || age > 150){
        cout << "not a valid age" << endl;
    }else{
        cout << "sorry you are only " << age << " years old , you cant vote"; 
    }


    return 0;
}