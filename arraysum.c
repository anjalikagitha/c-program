#include <stdio.h>

int main() {
    int i,n,sum=0;
    printf("enter elements how many you want to store:");
    scanf("%d",&n);
    int a[n] ;
     printf("enter elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    } 
    
    for(i=0;i<n;i++)
    {
      sum=sum+a[i] ; 
   
    }
    printf("The sum of array is %d",sum);
    
    return 0;
}
