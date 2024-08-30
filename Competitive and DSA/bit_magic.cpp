#include <bits/stdc++.h>
using namespace std;
void bit(int a, int b)
{
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
}
int main()
{
    int num1, num2;
    num1 = 3;
    num2 = 6;
    bit(num1, num2);

    return 0;
}