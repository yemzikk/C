#include<conio.h>
#include<stdio.h>
#include<math.h>
struct power
{
int x;
};
void main()
{
struct power e;
int x;
clrscr();
e.x=pow(5,4);
printf("Number: %d",e.x);
getch();
}
