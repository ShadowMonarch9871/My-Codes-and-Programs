#include <bits/stdc++.h>
using namespace std;
int sale(int a, int b, int c, int d)
{
    int count = 0;
    int sum = 0;
    while (sum <= d)
    {
        sum = sum + a;
        printf("%d\n",sum);
        if (sum <= d)
        {
            count++;

            if (a > c)
            {
                a = a - b;
            }
            else if (a == 0)
            {
                count--;
                a = c;
            }
            else if (a<c)
            {
                count--;
                a = c;
            }
            else{
                continue;
            }
        }
        else
        {
            break;
        }
    }

    cout << count;
    return 0;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    sale(a, b, c, d);
}
