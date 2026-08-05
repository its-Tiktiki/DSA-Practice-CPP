#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--){
		long long N, K;
		cin >> N >> K;
		multiset<long long> bags;

		for(int i = 0; i < N; ++i){
			long long candy_ct;
			cin >> candy_ct;
			bags.insert(candy_ct);
		}

		long long total_ct = 0;
		for(int i = 0; i < K; ++i){
			auto last_it = (--bags.end());
			int candy_ct = *last_it;
			total_ct += candy_ct;
			bags.erase(last_it);
			bags.insert(candy_ct / 2);
		}

		cout << total_ct << endl;

	}
}