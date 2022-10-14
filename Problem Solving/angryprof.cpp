#include <bits/stdc++.h>
using namespace std;
int prof(int a, int b)
{
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    int temp = 0;
    for (int i = 0; i < a; i++)
    {
        if (ar[i] <= 0)
        {
            temp++;
        }
        else
        {
            continue;
        }
    }
    if (temp >= b)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a, b;
        cin >> a >> b;
        prof(a, b);
        n = n - 1;
    }
}
