#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long curHouse = 1;
    long long time = 0;

    for (int i = 0; i < m; i++) {
        long long a;
        cin >> a;

        if (a >= curHouse) {
            time += a - curHouse;
            curHouse = a;
        } else {
            time += (n - curHouse) + a;
            curHouse = a;
        }
    }

    cout << time;
}
