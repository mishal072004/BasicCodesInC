#include<stdio.h>
int main()
{
    unsigned int a;
    printf("enter the basic salery:",a);
    scanf("%u",&a);
    if(a>0){
        printf("the number is positive:");
    }
    else if(a<0){
        printf("the number is negative:");
    }
    else
        printf("the number is :0");
    return 0;
}
