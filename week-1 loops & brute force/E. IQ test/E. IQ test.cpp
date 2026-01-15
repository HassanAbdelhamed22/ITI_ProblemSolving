#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> tests(n);
    for (int i = 0; i < n; i++)
        cin >> tests[i];

    int oddNums = 0;
    int evenNums = 0;

    int lastOddIdx = 0;
    int lastEvenIdx = 0;

    for (int i = 0; i < n; i++) {
        if (tests[i] % 2 == 0) {
            evenNums++;
            lastEvenIdx = i + 1;
        }
        else {
            oddNums++;
            lastOddIdx = i + 1;
        }
    }

    if (evenNums == 1)
        cout << lastEvenIdx;
    else
        cout << lastOddIdx;
}

