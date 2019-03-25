#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum,r,temp;
int stno,enno;
clrscr();
printf("Input starting number of range:");
scanf("%d",&stno);
printf("Input ending number of range:");
scanf("%d",&enno);
printf("Amstrong number is given rangen are:");
for (num=stno;num<=enno;num++)
{
temp=num;
sum=0;
while (temp!=0)
{
r=temp%10;
temp=temp/10;
sum=sum+(r*r*r);
}
if (sum==num)
{
printf("%d",num);
printf("\n");
}
}
getch();
}
