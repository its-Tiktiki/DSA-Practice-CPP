#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    int n;
    cin >> n;

    while(n--){
        string word;
        cin >> word;
        s.insert(word);
    }

    cout << "Unique value: " << endl;

    for(auto value: s){
        cout << value << endl;
    }


    return 0;
}