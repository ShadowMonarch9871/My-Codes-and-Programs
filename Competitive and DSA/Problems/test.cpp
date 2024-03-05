#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int length = s.size();
        if (length == 0 || length == 1)
            return true;
        else if (s[0] == s[length - 1])
        {
            isPalindrome(s.substr(1, length - 2));
        }
        else
        {
            return false;
        }
    }
};
int fib(int n)
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
            array[n] = fib(n - 1) + fib(n - 2);
            return array[n];
        }
    }
    else
    {
        return array[n];
    }
}

int main()
{
    // string s;
    // cin >> s;
    // Solution CheckPalindrome;
    // bool ans = CheckPalindrome.isPalindrome(s);
    // cout << boolalpha << ans;
    // return 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}