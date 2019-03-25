#include<stdio.h>
#include<conio.h>
int swa(int *p1,int *p2);
void main()
{
int a,b;
clrscr();
printf("\n Enter First Number:");
scanf("%d",&a);
printf("\n Enter Second Number:");
scanf("%d",&b);
swa(&a,&b);
printf("\n The Swapped Numbers Are:");
printf("\n First Number:%d \n Second Number=%d",a,b);
getch();
}
int swa(int *p1,int *p2)
{
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
return 0;
}



