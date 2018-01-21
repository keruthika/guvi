#include<stdio.h>
int main()
{
   int a[30],i,n,min;
   printf("Enter no of elements");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   min=a[0];
   }
   for(i=0;i<n;i++)
   {
      if(a[i]<min)
      {
         min=a[i];
      }
   }
   printf("minimum element",min);
   return 0;
}
