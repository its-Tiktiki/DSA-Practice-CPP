#include <bits/stdc++.h>
using namespace std;
int main(){

    map<pair<int, int>, int> m;
    pair<int, int> p1, p2;
    p1 = {1, 2};
    p2 = {1, 3};
    cout << (p1 < p2) << endl;

    map<set<int>, int> m2;
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {1, 2};
    cout << (s1 > s2) << endl;

    map<pair<string, string>, vector<int>> m3;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 0; i < n; ++i){
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;

        for(int j = 0; j < ct; ++j){
            int x;
            cin >> x;
            m3[{fn, ln}].push_back(x);
        }
    }

    for(auto pr : m3){
        auto &full_name = pr.first;
        auto &list = pr.second;

        cout << full_name.first << " " << full_name.second << endl;
        cout << "size: " << list.size() << endl;
        
        for(auto &element : list){
            cout << element << " ";
        }
    }


    return 0;
}
