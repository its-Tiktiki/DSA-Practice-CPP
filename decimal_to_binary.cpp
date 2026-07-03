#include <iostream>
using namespace std;
int main(){

    int decimal;
    cin >> decimal;

    while(decimal > 0){
        cout << decimal % 2;
        decimal /= 2;
    }


    return 0;
}