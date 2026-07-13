#include <iostream>
using namespace std;
int main(){
    int nums;
    cout << "Enter the number of rows: ";
    cin >> nums;

    // first half
    for(int i = 1; i <= nums; i++){
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl; 
    }

    // second half
    for(int i = nums-1; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << "* ";
        }
        cout << endl;
    }
    

    return 0;
}