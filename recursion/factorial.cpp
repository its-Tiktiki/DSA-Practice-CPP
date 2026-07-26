#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return fact(n-1)*n;
}
int main(){

    cout << fact(6) << endl;

    return 0;
}