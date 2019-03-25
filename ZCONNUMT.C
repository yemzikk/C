#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=0,x,d;
char *word[3000];
clrscr();
printf("Enter a Integer");
scanf("%d",&num);
while (num)
{
d=num%10;
num=num/10;
switch(d)
{
case 0:word[i++]="Zero";
break;
case 1:word[i++]="One";
break;
case 2:word[i++]="Two";
break;
case 3:word[i++]="Three";
break;
case 4:word[i++]="Four";
break;
case 5:word[i++]="Five";
break;
case 6:word[i++]="Six";
break;
case 7:word[i++]="Seven";
break;
case 8:word[i++]="Eight";
break;
case 9:word[i++]="Nine";
break;
}
}
for(x=i-1;x>=0;x--)
printf("%s",word[x]);
getch();
}