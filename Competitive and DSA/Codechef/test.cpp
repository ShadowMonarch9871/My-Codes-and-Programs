#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x > 0)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int exportc= a2-b1;
        int importc = a1-b2;
        int profitc = exportc - abs(importc);
        if (profitc > 0)
            cout << "YES";
        else
            cout << "NO";
        x--;
    }
}