#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q;
    q.push("arpa");
    q.push("apra");
    q.push("ara");
    q.push("papa");
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }


    return 0;
}