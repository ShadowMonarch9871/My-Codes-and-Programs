#include <stdio.h>
void max_of_four(int a, int b, int c, int d)
{
    if (a > b)
    {
        printf("%d", a);
    }
    else if (b > c)
    {
        printf("%d", b);
    }
    else if (c > d)
    {
        printf("%d", c);
    }
    
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}