#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int len = s.length();
	
	for (int i = len + 1; i <= 200; i++) {
		string suffix = to_string(i);

		if (suffix.length() + len == i) {
			cout << s << suffix;
			break;
		}
	}
}