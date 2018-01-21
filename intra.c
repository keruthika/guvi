#include <stdio.h>
void main()
{
    int num,m =20,n=40; 
    clrscr();
    printf("Print Odd Numbers");
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 1)
                  printf ("%d ", num);
         }
                getch();
}
