#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter side of a");
    scanf("%d",&a);
    printf("Enter side b");
    scanf("%d",&b);
    printf("Enter side c");
    scanf("%d",&c);
    if( (a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("Valid Triangle");
    }
    else{
        printf("Triangle is inavalid");
    }
    return 0;
}