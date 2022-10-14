#include <bits/stdc++.h>
using namespace std;
int ice_cream_parlor(int a, int b)
{
    int arr[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < b; i++)
    {
        int diff = a - arr[i];
        for (int j = 0; j < b; j++)
        {
            if ((arr[j] == diff) && (i != j))
            {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
            else
            {
                continue;
            }
        }
        
    }
    return 0;
}
int main()
{
    int a, b, n;
    cin >> n;
    while (n > 0)
    {
        cin >> a >> b;
        ice_cream_parlor(a, b);
        n--;
    }
    return 0;
}