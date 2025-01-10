
#include <stdio.h>
int main() {
    int i,n,max,min;
    float avg;
    printf("enter elements how many you want to store:");
    scanf("%d",&n);
    int a[n] ;
     printf("enter elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    
    for(i=0;i<n;i++)
    {
      if(a[i]>max) 
      {
          max=a[i];
      }
      if(a[i]<min)
      {
          min=a[i];
      }
   
    }
    
    printf("maximim element is %d",max);
    printf("\nminimun element is %d",min);
    
    return 0;
}
