#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    set<char> letters;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            letters.insert(s[i]);
    }
    cout << letters.size() << endl;
}

