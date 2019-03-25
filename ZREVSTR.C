#include<stdio.h>
#include<conio.h>
void rev();
void main()
{
clrscr();
printf("\n Enter a Sentence:" );
rev();
getch();
}
void rev()
{
char c;
scanf("%c",&c);
if(c!='\n')
{
printf("%c",c);
getch();
}
}



