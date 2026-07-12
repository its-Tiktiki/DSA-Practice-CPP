#include <bits/stdc++.h>
using namespace std;
int main(){

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.size()/2; i++){
        if(str[i] != str[str.size()-1-i]){
            cout << "Not a palindrom" << endl;
            break;
        }
        if(i == (str.size()/2) - 1){
            cout << "Palindrom" << endl;
        }
    }


    return 0;
}