#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;

    cout << "Enter the name: ";
    cin >> name;
    cout << "Before change: " << name << endl;

    //replacement of a character 
    //single quote for character
    name[1] = 'u'; 
    cout << "After change : " << name << endl;

    return 0;
}