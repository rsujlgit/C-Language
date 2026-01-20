#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter age");
    scanf("%d",&age);
    (age>18) ? printf("Legal to vote") : printf("Not eligible");
    return 0;
}