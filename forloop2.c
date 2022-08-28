#include<stdio.h>
int main()
{
    int n,f;
    printf("Enter a no.:");
    scanf("%d",&n);
    for(f=1;n>1;n--)
    {
        f=f*n;
    }
    printf("The fectorial is  %d",f);
    return 0;
}
