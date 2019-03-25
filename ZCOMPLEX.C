#include<stdio.h>
#include<conio.h>
struct complex
{
int real;
int img;
};
void main()
{
struct complex a,b,c;
clrscr();
printf("\n Enter the a part:");
scanf("%d%d",&a.real,&a.img);
printf("\n Enter the b part:");
scanf("%d%d",&b.real,&b.img);
c.real=a.real+b.real;
c.img=a.img+b.img;
if(c.img>=0)
printf("%d+%d(i)",c.real,c.img);
else
printf("%d%d(i)",c.real,c.img);
getch();
}