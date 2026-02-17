#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	map<char, int> freq;
	long long pairs = 0;

	for (char c : s) {
		freq[c]++;
		if (freq[c] == 2) {
			pairs++;
			freq[c] = 0;
		}
	}

	cout << pairs;
}