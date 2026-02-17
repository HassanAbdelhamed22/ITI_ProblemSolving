#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> tvs(n);
    for (int i = 0; i < n; i++)
        cin >> tvs[i];

    sort(tvs.begin(), tvs.end());

    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (tvs[i] < 0 && count < m) {
            sum += tvs[i];
            count++;
        }
    }

    cout << abs(sum);
}

