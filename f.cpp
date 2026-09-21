#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int f = 1;
	int s = 1;
	int ans = 0;
	for(int i = 3; i < N+1; ++i){
		ans = f + s;
		f = s;
		s = ans;
	}
	cout << ans;
	return 0;
}
