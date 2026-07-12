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


    string num;
    cin >> num;

    // it prints the last character not the last digit
    cout << "The last character is: " << num[num.size()-1] << endl;

    // it prints last digit
    cout << "The last digit is: " << num[num.size() - 1] - '0' << endl;
    

    return 0;
}