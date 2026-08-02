#include <bits/stdc++.h>
using namespace std;
int main(){

    string str, rev_str;

    //string input
    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = str.size() - 1; i >= 0; i--){
        // shouldn't use this ----> rev_str += str[i]; instead,
        rev_str.push_back(str[i]);
    }

    if(str == rev_str){
        cout << "Palindrom" << endl;
    }else{
        cout << "Not a palindrom" << endl;
    }


    return 0;
}