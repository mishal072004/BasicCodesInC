#include<stdio.h>
int main()
{
   int  i,j;
   printf("Enter2 int:");
   scanf("%d %d",&i,&j);
   printf("Not befote the swapping the data %d %d",i,j);
   i=i+j;
   j=i-j;
   i=i-j;
   printf("Now after swapping the data %d %d",&i,&j);
   return 0;
}
