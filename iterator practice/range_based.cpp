#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v = {1, 2, 3, 4, 5};

    // copy of v
    for(int value: v){
        cout << value << " ";
    }
    cout << endl;

    // reference 
    for(int &value : v){
        value++;
    }
    for(int &value : v){
        cout << value << " ";
    }
    cout << endl;



    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}};
    for(pair<int, int> &value : v_p){
        cout << value.first << " " << value.second << endl;
        
    }


    return 0;
}