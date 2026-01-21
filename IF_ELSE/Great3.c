#include<stdio.h>
#include<conio.h>

int main()
{
     int n1,n2,n3;
     printf("Enter Number 1 \n");
     scanf("%d",&n1);
     printf("Enter Number 2 \n");
     scanf("%d",&n2);
     printf("Enter Number 3 \n");
     scanf("%d",&n3);
     if(n1>n2 && n1>n3)
     {
                printf("Number 1 is greater");
     }
     else if(n2>n3 && n2>n1)
     {
        printf("Number 2 is greater");
     }
     else{
        printf("Number 3 is greater");
     }
     return 0;

}