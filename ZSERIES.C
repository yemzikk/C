#include<stdio.h>
#include<conio.h>
#include<math.h>
double series(int n)
{
int i;
double sums=0.0,ser;
for(i=1;i<=n;++i)
{
ser=1/ pow(i, i);
sums+=ser;
}
return sums;
}
void main()
{
int n;
double res;
clrscr();
printf("\n Enter a Value for n:");
scanf("%d",&n);
res=series(n);
printf("%.5f",res);
getch();
}