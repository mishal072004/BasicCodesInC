#include<stdio.h>
int main()
{

    int i,j;
    char choice;
    do{
       printf("Enter the two int:");
       scanf("%d %d",&i,&j);
       printf("The sum is:%d",i+j);
       printf("\ndo you want to coutinue \"Y/N\"");
       fflush(stdin);
       scanf("%c",&choice);
    }while(choice=='Y');
    return 0;
}
