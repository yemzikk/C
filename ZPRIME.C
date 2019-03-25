#include<stdio.h>
#include<conio.h>
int prime(int n);
void main()
{
int n1,n2,i,flag;
clrscr();
printf("Enter two positive intigers:");
scanf("%d %d",&n1,&n2);
printf("prime Numbers Between %d and %d are:\n",n1,n2);
for(i=n1+1;i<n2;++i)
{
flag=prime(i);
if(flag==1)
printf("%d \n",i);
}
getch();
}
int prime(int n)
{
int j,flag=1;
for(j=2;j<=n/2;++j)
{
if(n%j==0)
{
flag=0;
break;
}
}
return flag;
//getch();
}