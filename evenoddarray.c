#include <stdio.h>
int main() {
    int i,n,j=0,k=0;
    printf("enter elements how many you want to store:");
    scanf("%d",&n);
    int a[n] ,b[n],c[n];
     printf("enter elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
   
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        
            
        }
        else
        {
            c[k]=a[i];
            k++;
        }
        
    }
    printf("b array which contain even values\n");
    for(i=0;i<j;i++)
    {
    printf("%d\n",b[i]);
    
    }
    printf("c array which contain odd values\n");
    for(i=0;i<k;i++)
    {
    printf("%d\n",c[i]);
    
    }
    
    return 0;
}
