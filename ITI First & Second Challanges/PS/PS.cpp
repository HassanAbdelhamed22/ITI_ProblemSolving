#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#include <algorithm>


int main()
{
    string userName;
    cin >> userName;

    int count = 1;

    sort(userName.begin(), userName.end());

    for (int i = 1; i < userName.length(); i++) {
         if (userName[i] != userName[i - 1])
             count++;
    }

    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}

