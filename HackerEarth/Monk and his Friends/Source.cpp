#include<bits/stdc++.h>
using namespace std;
int main() {
	int T,n,m;
	cin >> T;
	long long int x;

	while (T) {
		set<long long int>s;
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			cin >> x;
			s.insert(x);
		}
		for (int i = 1; i <= m; i++) {
			cin >> x;
			auto it = s.find(x);
			if (it != s.end()) {
				cout << "YES" << endl;
			}
			else {
				s.insert(x);
				cout << "NO" << endl;
			}
		}
		T--;
	}
}