#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
void sort(int n)
{

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int temp = 0, b = 0;
    b = n;
    while (n > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                temp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = temp;
            }
            else
            {
                continue;
            }
        }
        n = n - 1;
    }
}
void sticks(int n)
{
    int b = n;
    sort(n);
    for (int i = 0; i < b; i++)
    {
        printf("%d", ar[i]);
    }
}
