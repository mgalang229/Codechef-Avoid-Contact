#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		// with non-infected people:
		// r r r r r r r r
		// n n   i   i   i
	
	  // only infected people:
		// r r r r r
		// i   i   i
		cout << (x - y) + (y != x ? 2 * y : 2 * y - 1) << '\n';
	}
	return 0;
}