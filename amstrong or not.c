#include<stdio.h>
int main()
{
    int n,m, remainder, r= 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &n);
    m=n;
    while (m!=0)
    {
        rem = m%10;
        r+= rem*rem*rem;
        m/= 10;
    }
    if(r==n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
    return 0;
}
