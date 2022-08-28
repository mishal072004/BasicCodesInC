#include<stdio.h>
int main()
{
    int i,j,choice;
    printf("Enter 2 number to");
    scanf("%d %d",&i,&j);
    printf("Enter the choice to perform the:\n");
    printf("1.Add\n2.sub\n3.multi\n4.divide");
    scanf("%d",&choice);
     switch(choice)
     {
        case 1:
            {
              printf("The sum of two number is:%d",i+j);
                break;
            }
        case 2:
        {
                printf("the subtract of two number is:%d",i-j);
                 break;
         }
        case 3:
            {   printf("The  multiplie of two number is:%d",i*j);
                 break;
            }
        case 4:
            {   printf("The divide of two number of:%d",i/j);
                 break;
            }
        default:
            printf("Enter the currect choice");
    }
    return 0;
}
