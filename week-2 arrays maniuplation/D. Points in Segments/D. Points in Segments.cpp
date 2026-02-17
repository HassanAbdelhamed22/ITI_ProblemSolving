#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    set<int> covered;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        for (int x = l; x <= r; x++) {
            covered.insert(x);
        }
    }

    int count = 0;

    for (int i = 1; i <= m; i++) {
        if (covered.find(i) == covered.end())
            count++;
    }

    cout << count << endl;

    for (int i = 1; i <= m; i++) {
        if (covered.find(i) == covered.end())
            cout << i << " ";
    }
}

