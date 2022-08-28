#include<stdio.h>
int main()
{
     int a,b,c,d,e,sum;
     double avg;
     printf("Enter 5 int:");
     scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
     sum=a+b+c+d+e;
     avg=sum/5.0;
     printf("The sum is %d",sum);
     printf("The avg is %lf",avg);
     return 0;
}
