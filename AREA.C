#include<stdio.h>
#include<conio.h>
void main()
{
  int r;
  clrscr();
  printf("Enter redius:");
  scanf("%d",&r);
  printf("Area is %f",3.14*r*r);
  printf("\nCircm is %f",2*3.14*r);
  getch();
}