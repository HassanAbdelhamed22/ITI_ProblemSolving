#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> worms(n);
    for (int i = 0; i < n; i++) {
        cin >> worms[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < n; k++) {
                if (i == k) continue;
                if (j == k) continue;

                if (worms[i] == worms[j] + worms[k]) {
                    cout << i + 1 << " " << j + 1 << " " << k + 1;
                    return 0;
                }
            }
        }
    }

    cout << -1;
}

