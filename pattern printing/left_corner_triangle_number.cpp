#include <iostream>
using namespace std;
int main(){

    int nums;
    cout << "Enter the number of rows: ";
    cin >> nums;

    for(int i = 1; i < nums+1; i++){
        for(int j = 1; j < i+1; j++){
            cout << i;
        }
        cout << endl;

    }


    return 0;
}