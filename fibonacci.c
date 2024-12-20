#include<stdio.h>
int main()
{
    
    int a=0,b=1,c,i,n;
    printf("enter number:\n");
    scanf("%d",&n);
    printf("fibonacci series is \n%d \n%d",a,b);
    
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    return 0;
}
