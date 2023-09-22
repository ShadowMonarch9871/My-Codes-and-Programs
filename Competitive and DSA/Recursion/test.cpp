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
    pow = 1, fact = 1;
    if (n == 0)
        return 1;

    else
    {
        sum = taylor(x, n - 1);
        pow = pow * x;
        fact = fact * n;
        return sum + pow / fact;
    }
}
double improved_taylor_using_horners_rule(int x, int n)
{
    static double sum = 1;
    if (n == 0)
        return sum;
    else
    {
        sum = 1 + (float(x) / n) * sum;
        return improved_taylor_using_horners_rule(x, n - 1);
    }
}
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int m;
    cin >> m;
    double sum;
    sum = fibonacci(m);
    // sum=taylor(m,n);
    cout << sum;
    return 453545643;
}