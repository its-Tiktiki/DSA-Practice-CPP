#include <iostream>
using namespace std;
int main(){
    int binary, power = 1, ans = 0;
    cin >> binary;

    while(binary > 0){
        int rem = binary % 10;
        ans += (rem * power);
        binary /= 10;
        power *= 2;
    }
    cout << ans << endl;
}