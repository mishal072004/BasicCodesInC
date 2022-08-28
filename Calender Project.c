/*OmDev's calendar library*/
#include<stdio.h>
#include<string.h>
#include"conio2.h"
int getNumberOfDays(int month,int year)
{
   switch(month)
   {
      case 1 : return(31);
      case 2 : if(year%4==0)
		 return(29);
	       else
		 return(28);
      case 3 : return(31);
      case 4 : return(30);
      case 5 : return(31);
      case 6 : return(30);
      case 7 : return(31);
      case 8 : return(31);
      case 9 : return(30);
      case 10: return(31);
      case 11: return(30);
      case 12: return(31);
      default: return(-1);
   }
}
char *getName(int odd)
{
   switch(odd)
   {
      case 0 :return("Sunday");
      case 1 :return("Monday");
      case 2 :return("Tuesday");
      case 3 :return("Wednesday");
      case 4 :return("Thursday");
      case 5 :return("Friday");
      case 6 :return("Saturday");
      default:return("Error in getName() module.Invalid argument passed");
   }
}
int getOddNumber(int day,int mon,int year)
{
   int res=0,t1,t2,y=year;
   year = year-1600;
   while(year>=100)
   {
       res=res+5;
       year=year-100;
   }
   res=(res%7);
   t1=((year-1)/4);
   t2=(year-1)-t1;
   t1=(t1*2)+t2;
   t1=(t1%7);
   res = res+t1;
   res=res%7;
   t2=0;
   for(t1=1;t1<mon;t1++)
   {
      t2+=getNumberOfDays(t1,y);
   }
   t2 = t2+day;
   t2 = t2%7;
   res = res+t2;
   res = res%7;
   if(y>2000)
     res=res+1;
   res = res%7;
   return res;
}
char *getWeek(int dd,int mm,int yy)
{
   int odd;
   if(!(mm>=1 && mm<=12))
   {
      return("Invalid month value");
   }
   if(!(dd>=1 && dd<=getNumberOfDays(mm,yy)))
   {
      return("Invalid date");
   }
   if(yy>=1600)
   {
     odd = getOddNumber(dd,mm,yy);
     odd=odd%7;
     return(getName(odd));
   }
   else
   {
      return("Please give year more than 1600");
   }
}
void printMonth(int mon,int year,int x,int y)
{
   int nod,odd,cnt,d=1,x1=x,y1=y;
   if(!(mon>=1 && mon<=12))
   {
       printf("INVALID MONTH");
       getch();
       return;
   }
   if(!(year>=1600))
   {
      printf("INVALID YEAR");
      getch();
      return;
   }
   if(x<=0)
     x=wherex();
   if(y<=0)
     y=wherey();
   gotoxy(x,y);
   textcolor(RED);
   cprintf("S");
   textcolor(YELLOW);
   cprintf("   M   T   W   T   F   S");
   /*       1234567891234567891234567 */
   textcolor(7);
   cprintf("");
   y++;
   nod=getNumberOfDays(mon,year);
   odd=getOddNumber(d,mon,year);
   switch(odd)
   {
     case 0 : x=x;
	      cnt=1;
	      break;
     case 1 : x=x+4;
	      cnt=2;
	      break;
     case 2 : x=x+8;
	      cnt=3;
	      break;
     case 3 : x=x+12;
	      cnt=4;
	      break;
     case 4 : x=x+16;
	      cnt=5;
	      break;
     case 5 : x=x+20;
	      cnt=6;
	      break;
     case 6 : x=x+24;
	      cnt=7;
	      break;
     default : printf("INVALID DATA FROM THE getOddNumber MODULE");
	       return;
   }
   gotoxy(25,25);
   gotoxy(x,y);
   printf("%02d",d);
   for(d=2;d<=nod;d++)
   {
      if(cnt%7==0)
      {
	y++;
	cnt=0;
	x=x1-4;
      }
      x = x+4;
      cnt++;
      gotoxy(x,y);
      printf("%02d",d);
   }
}
main()
{
   char ch='k';
   int dd,mm,yy;
   while(ch!='0')
   {
      clrscr();
      printf("   1.Know the day");
      printf("				2.Print the month");
      printf("				0.EXIT");
      printf("ENTER YOUR CHOICE : ");
      flushall();
      fflush(stdin);
      ch=getche();
      clrscr();
      switch(ch)
      {
	case '1': printf("Enter date (DD MM YYYY) : ");
		  scanf("%d %d %d",&dd,&mm,&yy);
		  printf("Day is : %s",getWeek(dd,mm,yy));
		  flushall();
		  getch();
		  break;
	case '2' : printf("Enter month and year (MM YYYY) : ");
		   scanf("%d %d",&mm,&yy);
		   printf(" ");
		   printMonth(mm,yy,-1,-1);
		   flushall();
		   getch();
		   break;
	case '0' : exit(0);
      }
   }
}
