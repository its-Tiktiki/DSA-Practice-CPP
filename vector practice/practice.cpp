#include <bits/stdc++.h>
using namespace std;

void print_v(vector<int> &v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;

}

int main(){
    vector<int> v;
    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
    }

    print_v(v);

    // declaring with size
    vector<int> v1(10, 3);
    v1.push_back(7);
    v1.push_back(6);
    v1.pop_back();
    print_v(v1);

    // copy vector
    vector<int> v2 = v1; // O(n)
    v2.push_back(5);
    print_v(v1);
    print_v(v2);


    return 0;
}