#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int sum = x + y;

    if (sum % 2 == 0)
        cout << "NO";
    else
        cout << "YES";
}

