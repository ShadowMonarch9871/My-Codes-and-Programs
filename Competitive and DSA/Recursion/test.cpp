#include <bits/stdc++.h>
using namespace std;
int naturalsum(int n)
{
    if (n == 1)
        return 1;
    return naturalsum(n - 1) + n;
}

int fact(int n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n;
}
int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return pow(m, n - 1) * m;
}
int powimproved(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return powimproved(m * m, n / 2);
    else
        return powimproved(m * m, n / 2) * m;
}

double taylor(int x, int n)
{
    static double pow, fact, sum;
    pow = 1,fact = 1;
    if (n == 0)
        return 1;

    else
    {
        sum = taylor(x, n - 1);
        pow=pow*x;
        fact=fact*n;
        return sum+pow/fact;
    }
    
}
int main()
{
    int m, n;
    cin >> m >> n;
    double sum;
    sum = taylor(m, n);
    cout << sum;
}