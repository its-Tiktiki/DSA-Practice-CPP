#include <bits/stdc++.h>
using namespace std;

// two pointer approach
int main(){
    int arr[] = {1, 2, 4, 5, 3, 8};
    int size = 6;

    int i = 0;
    int j = size - 1;

    while( i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}