#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s = to_string(n);
	int len = s.length();

	int count = 0;

	while (n > 0) {
		int x = n % 10;
		if (x % 2 == 0)
			count++;
		n /= 10;
	}

	if (count == len)
		cout << "YES";
	else
		cout << "NO";
}