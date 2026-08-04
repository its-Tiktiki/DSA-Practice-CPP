#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for(auto value: s){
        cout << value << endl;
    }
}
int main(){

    // can store duplicate element
    multiset<string> s;
    s.insert("abc");
    s.insert("sdf");
    s.insert("ghj");
    s.insert("abc");

    // only erase the value that the iterator points
    // mainly the first value of the given string
    auto it = s.find("abc");
    if(it != s.end()){
        cout << (*it) << endl;
        s.erase(it);
    }

    // erases all the string that matches the given str
    s.erase("sdf");
    print(s);

    return 0;
}