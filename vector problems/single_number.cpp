#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {4, 1, 3, 4, 1};

    int ans = 0;
    for(int i : nums){
        ans ^= i; // XOR operation to find the single number
    }

    cout << ans;
    
    return 0;
}