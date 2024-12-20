#include<stdio.h>
int main()
{
    
    int i,n,sum=0,sum1=0,j;
    printf("enter number:\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        sum=sum+i;
        }
    }
    printf("sum of even is %d",sum);
    for(j=1;j<=n;j++)
    {
        if(!(j%2==0))
        {
        sum1=sum1+j;
        }
    }
    printf("\nsum is odd %d",sum1);
    return 0;
}
