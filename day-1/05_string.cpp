#include<iostream>
#include <string>
using namespace std;
int main(){

    string firstName = "Abcd";
    string lastName = "Efgh";
    string fullName = firstName.append(lastName);

    cout << "the full name is : " << fullName <<endl;
    cout << firstName.at(2) <<endl;
    cout << lastName.size() <<endl ;
 
    return 0;
}