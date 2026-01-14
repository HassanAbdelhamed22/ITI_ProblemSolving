// B. Bear and Big Brother.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int i = 0;

    cin >> a;
    cin >> b;

    if (a > b) {
        i = 0;
    }

    while (a <= b) {
        a = 3 * a;
        b = 2 * b;
        i++;
    }

    cout << i;
}

