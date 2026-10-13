#include<stdio.h>
void main()
{
    int i, n, sum=0;
    float avg;
    clrscr();

    for(i=1; i<=5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        sum=sum+n;
    }

    avg=sum/5.0;

    printf("Average = %.2f", avg);

    getch();
}
