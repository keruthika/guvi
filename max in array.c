#include<stdio.h> 
int main() 
{
   int a[30],i,n,max; 
   printf("Enter no of elements");
   scanf("%d", &n);  
   for (i=0;i<n;i++)
   {
   scanf("%d", &a[i]);
   }
   max=a[0]; 
   for(i=0;i<n;i++)
   {
      if(a[i]>max)
      {
         max= a[i];
      }
   } 
   printf("max Element",max); 
   return 0;
  }

