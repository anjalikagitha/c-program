#include<stdio.h>
int main()
{
    
    int i,n,sum=0;
    printf("enter number:\n");
    scanf("%d",&n);
    printf("the values from 1 to n is:\n");
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum is %d",sum);
    return 0;
}
