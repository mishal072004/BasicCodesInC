#include <stdio.h>
#include <math.h>
int main()
{
    int n, j, i, t, rem, sum = 0, a[10];
    scanf("%d", &n);
    t = n, i = 0;
    while (n != 0)
    {
        rem = n % 10;
        a[i] = rem;
        i++;
        n = n / 10;
    }

    for (j = 0; j < i; j++)
    {
        sum = sum + pow(a[j], i);
    }

    if (sum == t)
    {

        printf("Number is armstrong:");
    }

    else
    {
        printf("Number is not prime:");
    }
    return 0;
}
