#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string y;
	cin >> y;

	set<char> digits;
	for (char c : y)
		digits.insert(c);

	if (digits.size() <= 3)
		cout << "YES";
	else
		cout << "NO";
}