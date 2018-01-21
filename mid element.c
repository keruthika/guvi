#include<stdio.h>
void main()
{
 int a[100],n,i,m;
 printf("Enter the number of elements");
 scanf("%d",&n);
 printf("Enter the array elements");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
if(n%2==0)
{
  m=a[n/2]/2;
for(i=0;i<n;i++)
{
   a[i]=m;
}
