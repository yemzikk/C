#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
clrscr();

for(i=1;i<=9;i+=2)
{
for(j=i;j<=9;j+=2)
{
printf("%d",j);
}
printf("\n");
}
getch();
}