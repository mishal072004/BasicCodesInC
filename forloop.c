#include<stdio.h>
int main()
{
    int n,p,sum=0;
    char choice;

    do{
        printf("Enter two no.:");
        scanf("%d %d", &n,&p);
        sum=n+p+sum;
        printf("The sum is :%d",sum);
        printf("\nDo you want to countinue \"Y/N\"");
        fflush(stdin);
        scanf("%c",&choice);

    }while(choice=='Y');


    return 0;
}

