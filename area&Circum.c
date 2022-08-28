#include<stdio.h>
int main()
{
    int r;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);

    float area=3.14*(r*r);
    float  circum=2*3.14*r;

    printf("The area of the cicle is %f",area);
    printf("The circlum of the circle is %f",circum);
    return 0;
}
