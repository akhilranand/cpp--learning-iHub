// #include<iostream>

// int main(){

//     for(int i = 1 ; i<=4;i++){
//         for(int j = 1;j<=i;j++){
//             std::cout<<j;
//         }
//         std::cout<<std::endl;
//     }


//     return 0 ;
// }


#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 4; i++) {
        int num = 1;

        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}