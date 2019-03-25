#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
int n,i=0,c;
clrscr();
printf("\n Enter a Number:");
scanf("%d",&n);
printf("Fibnacci Series:");
for (c=1;c<=n;c++)
{
printf(",%d",fib(i));
i++;
}
getch();
}
int fib(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return(fib(n-1)+fib(n-2));
}





