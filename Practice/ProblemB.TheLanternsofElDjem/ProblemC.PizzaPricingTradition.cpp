#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        long long r, s, x;
        cin >> r >> s >> x;

        long long A = x * s * s;
        long long B = r * r;

        long long cost = (A + B - 1) / B;

        long long price = ((cost + 9) / 10) * 10;

        cout << price << "\n";

    }
}

