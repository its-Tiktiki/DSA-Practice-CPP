#include <iostream>
using namespace std;

int main(){

    int nums;
    cout << "Enter the number of rows: ";
    cin >> nums;

    int st = 1;
    int sp = nums;

    for(int i = 0; i < nums; i++){
        for(int j = 0; j < sp; j++){
            cout << " ";
        }

        for(int k = 0; k < st; k++){
            cout << "0 ";
        }
        st++;
        sp--;

        cout << endl;

    }


    return 0;
}