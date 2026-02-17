#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long r = 0;


    vector<long long> cities(n);
    for (int i = 0; i < n; i++) {
        cin >> cities[i];
    }

    vector<long long> towers(m);
    for (int i = 0; i < m; i++) {
        cin >> towers[i];
    }

    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j + 1 < m) {
            long long distance1 = abs(cities[i] - towers[j]);
            long long distance2 = abs(cities[i] - towers[j + 1]);

            if (distance1 >= distance2)
                j++;
            else
                break;
        }

        long long nearest = abs(cities[i] - towers[j]);

        if (nearest > r)
            r = nearest;
    }

    cout << r;
}
