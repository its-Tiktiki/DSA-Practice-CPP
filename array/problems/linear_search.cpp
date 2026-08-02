#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int target = 4;

    cout << "Index of target: " << linear_search(arr, size, target) << endl;

    return 0;
}