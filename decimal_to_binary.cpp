#include <iostream>
using namespace std;

int main() {
    int decimal;
    cin >> decimal;

    int power = 1;
    int ans = 0;

    while (decimal > 0) {
        int rem = decimal % 2;
        decimal /= 2;

        ans += rem * power;
        power *= 10;
    }

    cout << "ans = " << ans << endl;
}