#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter Number");
    scanf("%d",&n);
    printf("%d",n);
    if(n<0)
    {
        printf("Number is negative");
    }
    if(n>0)
    {
        printf("Number is Positive");
    }
    if(n==0)
    {
        printf("Number is zero");
    }
}