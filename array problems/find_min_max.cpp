#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, -1};
    int size = 5;

    int min_num = *min_element(arr, arr + size);
    int max_num = *max_element(arr, arr + size);

    cout << "Minimum number: " << min_num << endl;
    cout << "Maximum number: " << max_num << endl;

    cout << "Index of minimum number: " << find(arr, arr + size, min_num) - arr << endl;
    cout << "Index of maximum number: " << find(arr, arr + size, max_num) - arr << endl;

    return 0;
}