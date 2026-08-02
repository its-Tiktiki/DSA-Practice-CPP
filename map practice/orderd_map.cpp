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

    auto it = m.find(3);
    if(it == m.end()){
        cout << "No value\n";
    }
    else{
        cout << (it->first) << " " << (it->second) << endl;
    }

    it = m.find(7);
    if(it == m.end()){
        cout << "No value\n";
    }
    else{
        cout << (it->first) << " " << (it->second) << endl;
    }

    m.erase(1);
    print(m);


    return 0;
}