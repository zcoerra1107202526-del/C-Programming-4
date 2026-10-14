
#include<stdio.h>
void main()
{
    int n, digit, count=0;
    clrscr();
   printf("Enter a number: ");
    scanf("%d", &n);

    for(; n>0; n=n/10)
    {
        digit=n%10;

        if(digit==0)
            count++;
    }

    printf("Total zeros = %d", count);

    getch();
}
