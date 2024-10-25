//program to check given number is equal to 0 ,positive,negative
#include<stdio.h>
void main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    if(n==0)
    {
        printf("n is equal");
    }
    else if(n>0)
    {
        printf("n is positive");
    }
    else
    {
        printf("n is negative");
    }
    
}
