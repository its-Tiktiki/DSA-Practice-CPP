#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int first_val = a;
    int second_val = b;
    a = second_val;
    b = first_val;

}
int main(){
    int a = 6;
    int b = 7;

    cout << "Before swapping A = " << a <<  " and B = " << b << endl;
    swap(a, b);

    cout << "After swapping A = " << a << " and B = " << b << endl;

    return 0;
}