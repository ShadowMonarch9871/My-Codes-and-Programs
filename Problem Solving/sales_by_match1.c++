#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int n)
{
    int temp = 0;
    int b = n;
    while (n > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            else
            {
                continue;
            }
        }
        n = n - 1;
    }
}
int sales(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    int count = 0;
    int temp = 1;
    int bin;
    int rem;
    while (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                else if (arr[i] == arr[j])
                    temp++;
            }
            bin = temp / 2;
            count = count + bin;
        }
        n--;
    }
    cout << count;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    sales(n);
}