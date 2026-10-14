#include<stdio.h>
void main()
{
  int base,exp,i,result=1;
clrscr();
printf("Enter base:");
scanf("%d",&base);

printf("Enter exp:");
scanf("%d",&exp);

for(i=1;i<=exp;i++)
{
result=result*base;
}
printf("Answer= %d",result);
getch();
}
