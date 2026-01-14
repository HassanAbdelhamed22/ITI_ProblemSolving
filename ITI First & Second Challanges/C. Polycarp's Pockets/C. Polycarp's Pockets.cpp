#include <iostream>
using namespace std;

int main() {
    int numOfCoins;
    cin >> numOfCoins;

    int arr[101] = { 0 };
    int inputs;

    for (int i = 0; i < numOfCoins; i++) {
        cin >> inputs;
        arr[inputs]++;
    }

    int ans = 0;
    for (int i = 1; i <= 100; i++) {
        if (ans < arr[i])
            ans = arr[i];
    }

    cout << ans;
}
