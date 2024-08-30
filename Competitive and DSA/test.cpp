#include <bits/stdc++.h>

using namespace std;
int factorialnumber(long long N)
{
    if (N == 1)
    {
        return 1;
    }
    if (N == 0)
        return 1;
    return (N * (factorialnumber(N - 1)));
}

void Palindrome(string s)
{
    string rev;
    char *p1;
    char *p2;
    p1 = &s[0];
    int len = s.length();
    p2 = &s[len - 1];
}
vector<long long> Fibonacci(long long n)
{
    vector<long long> vec;
    vec.push_back(1);
    int i = 2;
    for (i = 1; i < n; i++)
    {
        if (i == 1)
            vec.push_back(1);
        else
            vec.push_back(vec[i - 1] + vec[i - 2]);
    }

    return vec;
}
long long cost_to_hire_k_workers(vector<int> &costs, int k, int candidates)
{
    int temp = 0;
    int min_cost = costs[0];
    while (k > 0)
    {
        for (int i = 0; i < candidates; i++)
        {
            if (min_cost > costs[i])
                min_cost = costs[i];
        }
    }
}
void maxstreak(vector<int> &array1, vector<int> &array2, int size)
{
    int streak1 = 0;
    int streak2 = 0;
    vector<int> streaks1;
    vector<int> streaks2;
    streaks1.clear();
    streaks2.clear();

    for (auto it : array1)
    {
        if (it != 0)
        {
            streak1++;
        }
        else
        {
            streaks1.emplace_back(streak1);
            streak1 = 0;
        }
    }
    streaks1.emplace_back(streak1);

    for (auto it : array2)
    {
        if (it != 0)
        {
            streak2++;
        }
        else
        {
            streaks2.emplace_back(streak2);

            streak2 = 0;
        }
    }
    streaks2.emplace_back(streak2);
    int max1, max2;
    max1 = *(max_element(streaks1.begin(), streaks1.end()));
    max2 = *(max_element(streaks2.begin(), streaks2.end()));

    if (max1 > max2)
    {
        cout << "Om" << endl;
    }
    else if (max2 > max1)
    {
        cout << "Addy" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
    // for (auto it : streaks1)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // for (auto it : streaks2)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    while (5 > 0)
    {
        while (3 < 2)
        {
            while (3 < 2)
            {
                while (3 < 2)
                {
                    while (3 < 2)
                    {
                        while (3 > 2)
                        {
                            while (3 > 2)
                            {
                                while (3 > 2)
                                {
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
void fun1()
{
    int x;
    cout << x;
}

int main()
{
    // long long n;
    // cin >> n;
    // vector<long long> vec;
    // vec = Fibonacci(n);
    // for (auto it : vec)
    // {
    //     cout << it << " ";
    // }
    // vector<int> array1;
    // vector<int> array2;
    // int test_cases;
    // cin >> test_cases;
    // int size;
    // while (test_cases > 0)
    // {
    //     cin >> size;
    //     array1.clear();
    //     array2.clear();

    //     for (int i = 0; i < size; i++)
    //     {
    //         int a;
    //         cin >> a;
    //         array1.emplace_back(a);
    //     }

    //     for (int i = 0; i < size; i++)
    //     {
    //         int a;
    //         cin >> a;
    //         array2.emplace_back(a);
    //     }

    //     maxstreak(array1, array2, size);
    //     test_cases--;
    // }
    // fun1();
    cout << 1 + 5 * 3 / 2;
    return 0;
}