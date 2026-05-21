#include<iostream>
#include <string>
#include<typeinfo>
using namespace std;
int main(){

    // auto letter = 'a';
    // //cout << "enter a charector : ";
    // //cin >> letter ;
    char* letter = new char;

    cin >> *letter;

cout << *letter;
    if(typeid(letter)== typeid(char)){
        cout << letter << " is a char";
    }else{
        cout << letter << " is not a char";
    }

    return 0;
}