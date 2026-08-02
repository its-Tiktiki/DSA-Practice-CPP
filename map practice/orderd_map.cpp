#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m){
    cout << "size: " << m.size() << endl;
    for(auto &pr: m){
        cout << pr.first << " " << pr.second << endl;
    }
}
int main(){
    map<int, string> m;

    m[1] = "ihu"; // O(log(n))
    m[2] = "ilu";
    m[3] = "idgaf";
    m.insert({4, "fu"});

    print(m);

    return 0;
}