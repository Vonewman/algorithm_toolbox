#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		long long tot = 0, curPos = 0;

		while (q--) {
			int a, b;
			cin >> a >> b;
			tot += abs(curPos - a);
			tot += abs(a-b);
			curPos = b;
		}
		cout << tot << endl;
	}
}
