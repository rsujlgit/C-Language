#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter Number 1");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Number is even");
        if(num>20)
        {
            printf("Number is greater\n");
        }
        else{
            printf("Number is Smaller\n");
        }
    }
    else
    {
        printf("Number is odd");
        if(num<20)
        {
            printf("Number is smaller\n");
        }
        else{
            printf("not\n");
        }
    }
}