#include<stdio.h>
int main()
{
    char a;
    printf("Enter the input :");
    scanf("%c",&a);

    if(a>='A'&&a<='Z'){
        printf("The input is capital leter:");
    }
    else if(a>='a'&&a<='z'){
        printf("The input is small leter:");
    }else if(a>='0'&&a<='9'){
        printf("The input  is number:");
    }
    else
      printf("The input is other ");
        return 0;
}
