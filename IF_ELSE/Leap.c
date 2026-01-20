//Most year are divisible by 4 but century are special
// for exmaple 1900 divisle by 4 but not leap year and 2000 divisble by 4 and is leap year

#include<stdio.h>
#include<conio.h>
int main()
{
   int year;
   printf("Enter year");
   scanf("%d",&year);
     if(year %400 == 0 || (year % 4==0 && year % 100!=0) )
     {
        printf("It is leap year");
     }
     else{
        printf("Not a leap year");
     }
    return 0;
}