#include <stdio.h>
#include <math.h> 
int main()
{
     int a,d,n,i,n;
     int sum = 0; 
     printf("Enter the first term");
     scanf("%d",&a);
     printf("Enter the total numbers");
     scanf("%d",&n);
     printf("Enter the common difference");
     scanf("%d",&d);
     sum=(n*(2*a+(n-1)*d))/2;
     t=a+(n-1)*d;
     printf("Sum of the series");
     for(i=a;i<=t;i=i+d)
     {
     if(i!= t)
       printf("%d",i);
      else
       printf("%d",i,sum);
     }
     return 0;
}
