#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter value of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is larger number");
        }
    }
    else if(b>c)
    {
        printf("b is larger number");
    }
    else
    {
        printf("c is larger number");
    }
    
}
