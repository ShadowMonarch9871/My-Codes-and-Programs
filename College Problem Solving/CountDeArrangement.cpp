#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long der[3001];

void countDer()
{
    der[0] = 1;
    der[1] = 0;
    der[2] = 1;

    for (int i=3; i<=3000; ++i)
        der[i] = ((i-1)*(der[i-1] + der[i-2]))%mod;
}

int main()
{
    countDer();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << der[n] << endl;
    }
    return 0;
}