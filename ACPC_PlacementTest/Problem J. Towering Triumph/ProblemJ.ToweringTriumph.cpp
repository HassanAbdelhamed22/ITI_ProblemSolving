#include <iostream>
using namespace std;

int main() {
	int h1, h2, h3;
	cin >> h1 >> h2 >> h3;

	if (h1 > h2 && h1 > h3)
		cout << h1;
	else if (h2 > h1 && h2 > h3)
		cout << h2;
	else
		cout << h3;
}