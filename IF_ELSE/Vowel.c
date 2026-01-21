#include<stdio.h>
#include<conio.h>

int main()
{

    char al;
    printf("Enter Alphabet");
    scanf("%c",&al);
    if(al=='a' || al=='e' || al=='i' || al=='o' || al=='u' || al=='A')
    {
        printf("Alphabet is vowel");
    }
    else
    {
        printf("Not Vowel");
    }
    return 0;
}