#include <stdio.h>
int main()
{
    int m,n,i,flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &m, &n);
    printf("Prime numbers between m and n);
    while (m < n)
    {
        flag = 0;
        for(i = 2; i <= m/2; ++i)
        {
            if(m%i== 0)
            {
            flag = 1;
                break;
            }
        }
