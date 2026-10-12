#include<stdio.h>
void main()
{
    int i, n, sum=0;
    clrscr();

    printf("Enter the limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum + (i*i);
    }

    printf("Sum of squares = %d", sum);

    getch();
}
