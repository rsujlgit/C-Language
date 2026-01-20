#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("Enter number 1\n");
    printf("Enter number 2 \n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("Number 1 is greater");
    }
    if(num1<num2)
    {
        printf("Number is smaller");
    }
    if(num1==num2)
    {
        printf("Number is same");
    }

    return 0;
}