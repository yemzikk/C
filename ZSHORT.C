#include<stdio.h>
#include<conio.h>
void main()
{
char ch[30];
int i;
clrscr();
printf("Enter a String:\n");
gets(ch);
for(i=0;i<30;i++)
{
if(i==0)
{
printf("%c",ch[i]);
}
if(ch[i]==' ')
printf("%c",ch[i+1]);
}
getch();
}
