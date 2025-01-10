
#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("enter elements how many you want to store:");
    scanf("%d",&n);
    int a[n] ,b[n];
     printf("enter elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
   printf("The even elements in an array is\n");
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
            sum=sum+a[i];
            
        }
        
    }
   printf("The sum of even elements of b array is %d",sum);
    
    
  
    return 0;
}
