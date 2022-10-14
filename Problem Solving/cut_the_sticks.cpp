#include <bits/stdc++.h>
using namespace std;
int sort(int arr[], int n)
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
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    int count = 0;
    int a;
    cout << n << " ";
    while (arr[n - 1] != 0)
    {
        for (int i = 0; i < n; i++)
        {
            a=arr[i];
            for (int j = 0; j < n; j++)
            {
                arr[j] = arr[j] - a;
                if (arr[j] == 0)
                {
                    count=count+1;
                }
                else
                {
                    continue;
                }
            }
            cout << n-count << '\t';
            count=0;
        }
    }

    return 0;
}
