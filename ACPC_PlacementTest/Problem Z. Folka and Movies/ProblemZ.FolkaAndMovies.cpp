#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

struct Movie {
	string originalName;
	string name;
	long long id;

	bool operator<(const Movie& other) {
		if (name != other.name)
			return name < other.name;

		return id < other.id;
	}
};

int main() {
	int n;
	cin >> n;

	vector<Movie> movies(n);

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		movies[i].originalName = s;

		int dash = s.find('-');
		string strId = s.substr(0, dash);
		string strName = s.substr(dash + 1);

		movies[i].id = stoll(strId);
		movies[i].name = strName;
	}

	sort(movies.begin(), movies.end());

	for (int i = 0; i < n; i++)
		cout << movies[i].originalName << endl;
}