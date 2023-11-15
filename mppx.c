#include <stdio.h>
int main()
{
    int a[8];
    int i, j, t, done;
    printf("Please put 8 intenger.\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    i = 0;
    do
    {
        done = 1;
        for (j = 7; j >= i + 1; --j)
            if (a[j] < a[j - 1])
            {
                done = 0;
                t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        i++;
    } while ((i < 8) && !done);
    for (int k = 0; k < 8; k++)
    {
        printf("%2d", a[k]);
    }
}