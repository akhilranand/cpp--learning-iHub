#include <iostream>
using namespace std;

int main() {


    int ogNum = 1234321;
    int copyNum = ogNum;
    int newNum = 0;
    int rem;

    while(ogNum !=0){
        rem = ogNum % 10;
        newNum = newNum*10+rem;
        ogNum = ogNum/10;
    }
    cout << "og -> "  << ogNum << endl;
    cout << "new -> " << newNum << endl;
    cout << "copy -> "<<copyNum<<endl;

    if(newNum == copyNum){
        cout << "palindrom " << endl;
    }else{
        cout << "not palintrom" << endl;
    }

    return 0;
}