#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    for(int i = 0; i <n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        int min_indx = i;
        for(int j = i + 1; j < n; ++j){
            if(a[j] < a[min_indx]){
                min_indx = j;
            }
        }
        swap(a[i], a[min_indx]);
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}