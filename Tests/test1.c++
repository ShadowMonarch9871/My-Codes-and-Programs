#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    while (n > 0)
    {
        int a, b;
        cin >> a >> b;
        int c = 0;
        int sq = b;
        while (sq >= 0)
        {
            c++;
            
            sq = a - sq;
            a=a-b;
        }
        cout << (2 * c)<<endl;
        n--;
    }
    return 0;
}
