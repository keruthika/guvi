i#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,n,t;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the elements in array");
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{               
if(a[j]<a[j+1])
{
t=a[j+1];
a[j+1]=ar[j];
a[j]=t;
}
}
}
printf("Array in the Descending order"); for(i=1;i<=n;i++)
{
printf("%d",a[i]);
}
getch();
}
