#include <iostream>
#include <vector>

using namespace std;

struct Laptop { 
    int speed, ram, hdd, cost; 
};

int main()
{
    int n;
    cin >> n;

    vector<Laptop> laptops(n);

    for (int i = 0; i < n; i++) {
        cin >> laptops[i].speed
            >> laptops[i].ram
            >> laptops[i].hdd
            >> laptops[i].cost;
    }

    int indx = 0;
    int minCost = 1e9;

    for (int i = 0; i < n; i++) {
        bool outdated = false;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            if (laptops[i].speed < laptops[j].speed
                && laptops[i].ram < laptops[j].ram
                && laptops[i].hdd < laptops[j].hdd) {
                outdated = true;
                break;
            }
        }

        if (!outdated && laptops[i].cost < minCost) {
            minCost = laptops[i].cost;
            indx = i;
        }
    }

    cout << indx + 1;
}
