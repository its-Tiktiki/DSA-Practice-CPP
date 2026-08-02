#include <bits/stdc++.h>
using namespace std;
int main(){
    string num;
    cin >> num;

    for(int i = 0; i < num.size()/2; i++){
        if(num[i] - '0' != num[num.size() - 1 - i] - '0'){
            cout << "Not a palindrom" << endl;
            break;
        }
        if(i == (num.size()/2) - 1){
            cout << "Palindrom" << endl;
        }
    }

    return 0;
}