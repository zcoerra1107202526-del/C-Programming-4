
#include<stdio.h>
void main()
{
    int i, j;
    clrscr();

    /* Letter P */
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==3 ||
               (j==5 && i<3))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
    }

    printf("\n");

    /* Letter A */
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if((i==1 && j>1 && j<5) ||
               i==3 || j==1 || j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
    }

    printf("\n");

    /* Letter R */
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==3 ||
               (j==5 && i==2) ||
               (i==4 && j==3) ||
               (i==5 && j==4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
    }

    printf("\n");

    /* Letter T */
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1 || j==3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
    }

    printf("\n");

    /* Letter H */
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j==1 || j==5 || i==3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
    }

    getch();
}
