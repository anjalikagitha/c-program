#include <stdio.h>

int main() {
    int i,n,sum=0;
    float avg;
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
    avg=sum/n;
    printf("The sum of array is %d",sum);
    printf("\nthe average of an array is: %f",avg);
    
    return 0;
}
