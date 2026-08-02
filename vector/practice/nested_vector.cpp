#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<pair<int, int>> &v){
    cout << "Size: " << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i].first  << " " << v[i].second << " ";
        cout << endl;
    }
}

int main(){
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    print_vector(v);

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    print_vector(v);


    return 0;
}