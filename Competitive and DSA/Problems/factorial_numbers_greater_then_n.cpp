#include <bits/stdc++.h>
using namespace std;

class Factorial
{
public:
    long long fact(int n)
    {
        if (n == 1)
            return 1;
        return fact(n - 1) * n;
    }
    vector<long long> factorialNumbers(long long n)
    {
        vector<long long> array;
        long long storage;
        int i = 1;
        array.emplace_back(1);
        storage = fact(1);

        while (storage <= n)
        {

            if (storage <= n / (i + 1))
                array.emplace_back(storage * (i + 1));
            storage = storage * (i + 1);

            i++;
        }
        return array;
    }
    void factalter(long long num, int n, vector<long long> &answer, long long factorial)
    {
        if (factorial > num)
            return;

        answer.emplace_back(factorial);
        factalter(num, n + 1, answer, factorial * n);
    }
    vector<long long> factorialNumbersalter(long long n)
    {
        vector<long long> array;
        factalter(n, 2, array, 1);
        return array;
    }
};

int main()
{
    

    return 0;
}