#include <bits/stdc++.h>
using namespace std;

void change_arr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
        arr[i] = arr[i] + 10;
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Before change: " << endl;
    change_arr(arr, size);
    cout << "After change: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}