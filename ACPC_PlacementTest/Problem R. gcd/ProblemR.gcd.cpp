#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int q;
	cin >> q;

	while (q--) {
		int k;
		cin >> k;

		int count = 0;

		long long cur_gcd = 0;

		for (int i = 0; i < n; i++) {
			if (a[i] % k != 0)
				count++;
			else {
				if (cur_gcd == 0)
					cur_gcd = a[i];
				else
					cur_gcd = gcd(cur_gcd, a[i]);
			}
			if (count > 1) break;
		}

		if (count > 1)
			cout << "NO";
		else {
			if (count == 0 || cur_gcd % k == 0)
				cout << "YES";
			else
				cout << "NO";
		}
			
	}
}