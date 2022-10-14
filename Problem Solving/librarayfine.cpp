#include <bits/stdc++.h>
using namespace std;
int book(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int cost;
    if (y1 > y2)
    {
        cost = 10000;
        cout << cost;
    }
    else if ((y1 == y2) && (m1 > m2))
    {
        cost = 500 * (m1 - m2);
        cout << cost;
    }
    else if ((y1 == y2) && (m1 == m2) && (d1 > d2))
    {
        cost = 15 * (d1 - d2);
        cout << cost;
    }
    else if ((y1 <= y2) && (m1 <= m2))
    {
        cout << 0;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
int main()
{
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    book(d1, m1, y1, d2, m2, y2);
    return 0;
}
