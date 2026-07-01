#include <iostream>
using namespace std;

int main(){
    int nums;
    cout << "Enter the number of rows: ";
    cin >> nums;

    for(int i = 0; i < nums; i++){
        for(int j = i; j > 0; j--){
            cout << "  ";
        }
        for(int k = nums-i; k > 0; k--){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}