#include <bits/stdc++.h>
using namespace std;
void candle(int n)
{
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        else
        {
            continue;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (max == array[i])
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    cout << count;
}
int main()
{
    int n;
    cin >> n;
    candle(n);
}