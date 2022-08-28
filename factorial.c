#include<stdio.h>
int main()
{
    int arr[3][4], i, j, sum = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Enter Element:");
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    printf("Sum is %d", sum);
    printf("\nAverage is %f", (float)sum / 12);
    return 0;
}

