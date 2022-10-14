#include <bits/stdc++.h>
using namespace std;
void prof(int a, int b)
{
    cin >> a >> b;
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
    if (temp > b)
    {
        cout << "YES";
    }
    else
    {
        cout << "\nNO";
    }
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