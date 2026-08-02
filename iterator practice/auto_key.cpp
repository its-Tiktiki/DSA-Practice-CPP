#include <bits/stdc++.h>
using namespace std;
int main(){

    // it dynamically determins data type
    auto a = 1;

    vector<int> v = {1, 2, 3, 4, 5};
    for(auto value : v){
        cout << value << " ";
    }

    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}};
    for(auto &value : v_p){
        cout << value.first << " " << value.second << endl;
        
    }

    return 0;
}