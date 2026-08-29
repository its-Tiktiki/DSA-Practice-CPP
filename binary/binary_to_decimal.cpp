#include <bits/stdc++.h>
using namespace std;
int main(){

    string n;
    cin >> n;

    long long ans = 0;
    int a = n.size() -1;

    for(int i = a; i >= 0; --i){
        ans += (n[a-i] - '0') * pow(2, i);

    }

    cout << ans;

    return 0;
}