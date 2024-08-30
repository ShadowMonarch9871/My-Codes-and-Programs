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
int fibonacci_using_memoization(int n)
{
    static vector<int> array(n + 1, -1);
    if (array[n] == -1)
    {
        if (n <= 1)
        {
            array[n] = n;
            return array[n];
        }

        else
        {
            array[n] = fibonacci_using_memoization(n - 1) + fibonacci_using_memoization(n - 2);
            return array[n];
        }
    }
    else
    {
        return array[n];
    }
}
int combination_nCr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    if (n == 1)
        return n;
    return combination_nCr(n - 1, r - 1) + combination_nCr(n - 1, r);
}
void ToH(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
        cout << "Move disk from " << source << " to " << destination << endl;
    else
    {
        ToH(n - 1, source, destination, auxiliary);
        cout << "Move disk from " << source << " to " << destination << endl;
        ToH(n - 1, auxiliary, source, destination);
    }
}

int main()
{
    int n;
    cin >> n;
    ToH(n, 'A', 'B', 'C');
}