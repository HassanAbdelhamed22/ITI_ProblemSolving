#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;

    int matrix[6][6] = { 0 };

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }

    bool win = false;

    for (int i = 1; i <= 5; i++) {
        for (int j = i + 1; j <= 5; j++) {
            for (int k = j + 1; k <= 5; k++) {
                if (matrix[i][j] && matrix[i][k] && matrix[j][k])
                    win = true;
                
                if (!matrix[i][j] && !matrix[i][k] && !matrix[j][k])
                    win = true;
            }
        }
    }

    if (win)
        cout << "WIN";
    else
        cout << "FAIL";
}


