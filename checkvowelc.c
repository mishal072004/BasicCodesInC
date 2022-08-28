#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the digit:");
    scanf("%c",&ch);
    if('A'==ch||'I'==ch||'O'==ch||'U'==ch||'E'==ch)
        printf("The digit is vowel");
    else  if('a'==ch||'i'==ch||'o'==ch||'u'==ch||'e'==ch)
        printf("The digit is vowel");
    else
        printf("The digit is constant:");
    return 0;
}
