#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){

    cout << "Size: " << m.size() << endl;
    for(auto k: m){
        cout << k.first << " " << k.second << endl;
    }
    cout << endl;
}

int main(){

    unordered_map<int, string> m;
    m[1] = "first";
    m[5] = "five";
    m[3] = "three";
    m[6] = "six";
    print(m);





    return 0;
}