#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {3, 2, 4, 3, 1, 4, 2};

    int ans = 0;
    for(int i : nums){
        ans ^= i;
    }
    cout << ans << endl;
    
    return 0;
}