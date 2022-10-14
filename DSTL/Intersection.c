#include <stdio.h>
void intersection(int a, int b)
{
    int array1[a];
    int array2[b];
    printf("Enter the Elements of the first set\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter the Elements of the second set\n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &array2[i]);
    }
    int temp = 0, j = 0;

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (array1[i] == array2[j])
            {
                temp++;
            }
            else
            {
                continue;
            }
        }
    }

    int array3[temp];
    for (int k = 0; k < temp; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                if (array1[i] == array2[j])
                {
                    array3[k] = array1[i];
                }
            }
        }
    }
    for (int i = 0; i < temp; i++)
    {
        printf("%d ", array3[i]);
    }
}

void main()
{
    printf("Enter the Size of the Arrays\n");
    int a, b;
    scanf("%d %d", &a, &b);
    intersection(a, b);
}
