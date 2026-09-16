#include <bits/stdc++.h>
using namespace std;

// gobal variable
int A = 7;
void change(){
    A++;
}

int main(){
    // int a = 7; //value wont change bcz its a local variable
    cout << "Before change a = " << A << endl;
    change();
    cout << "After change a = " << A << endl;

    return 0;
}