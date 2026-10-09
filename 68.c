#include<stdio.h>
void main()
{
    int i, n, fact=1;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }

    printf("Factorial = %d", fact);

    getch();
}
