#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> same;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (same[a[i]] == 0) {
            same[a[i]] = 1;
            count++;
        }
    }

    if (count < k) {
        cout << "NO";
        return 0;
    }

    cout << "YES\n";

    same.clear();
    count = 0;

    for (int i = 0; i < n; i++) {
        if (same[a[i]] == 0) {
            same[a[i]] = 1;
            cout << i + 1 << " ";
            count++;
        }
        if (count == k)
            break;
    }
}
