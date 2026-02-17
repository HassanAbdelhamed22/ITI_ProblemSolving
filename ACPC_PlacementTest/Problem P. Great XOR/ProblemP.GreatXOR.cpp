#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		long long x;
		cin >> x;

		long long power = 1;

		while (power <= x)
			power *= 2;

		long long result = (power - 1) - x ;
		cout << result << endl;
	}

}