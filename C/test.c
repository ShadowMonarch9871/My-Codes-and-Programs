#include <stdio.h>
void icecreamparlor(int n, int k)
{
    int array[k];
    int i, m, o, p;
    for (i = 0; i < k; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < k; i++)
    {
        if (array[i] >= n)
        {
            continue;
        }
        else
        {
            p = i;
            m = n - array[i];
            printf("%d\n", m);

            for (int j = 0; j < k; j++)
            {
                if ((array[j] == m) && (j != i))
                {
                    o = j;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    printf("%d %d\n", o + 1, p + 1);
}
int main()
{
    int a, o, k;
    scanf("%d", &a);
    while (a >> 0)
    {
        scanf("%d %d", &o, &k);
        icecreamparlor(o, k);
        a = a - 1;
    }
    return 0;
}