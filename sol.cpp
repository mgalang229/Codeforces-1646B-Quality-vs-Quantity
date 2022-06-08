#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.rbegin(), a.rend());
		int from = 0;
		int to = n - 1;
		long long x = 0;
		long long y = 0;
		int cntx = 0;
		int cnty = 0;
		bool checker = false;
		while (from <= to) {
			if (x <= y) {
				x += a[from];
				cntx++;
				from++;
			} else {
				y += a[to];
				cnty++;
				to--;
			}
			if (x > y && cntx < cnty) {
				checker = true;
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
