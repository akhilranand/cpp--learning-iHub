#include<iostream>
using namespace std;
int main(){
    int mark;
    mark = 91;
    if(mark >=90){
        cout<<"Grade A";
    }else if(mark>=75){
        cout<<"Grade B";
    }else if(mark>=50){
        cout<<"Grade C";
    }else{
        cout<<"Fail";
    }
    return 0;
}