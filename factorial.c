#include<stdio.h>
int main()
{
    long int fact=1;
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of n is : %ld",fact);
}
