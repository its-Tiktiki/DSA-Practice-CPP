#include <iostream>
using namespace std;
int main(){

    int nums;
    cout << "Enter the number of rows: ";
    cin >> nums;

    string star = "*";

    for(int i = 0; i < nums; i++){
        cout << star;
        star += " *";
        cout << endl;

    }


    return 0;
}