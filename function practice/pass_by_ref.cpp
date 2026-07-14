#include <bits/stdc++.h>
using namespace std;

int A = 7; // gobal variable
void change(){
    A++;
}

int main(){
    // int a = 7; // value wont change bcz its a local variable
    cout << "Before change a = " << A << endl;
    change();
    cout << "After change a = " << A << endl;

    return 0;
}