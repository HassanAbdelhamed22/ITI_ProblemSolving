#include <iostream>
#include <unordered_set>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int numOfChar;
    cin >> numOfChar;

    string s;
    cin >> s;

    unordered_set<char> chars;

    for (char c : s) {
        c = tolower(c);
        if (isalpha(c)) {
            chars.insert(c);
        }
    }

    if (chars.size() == 26)
        cout << "YES";
    else
        cout << "NO";
}


