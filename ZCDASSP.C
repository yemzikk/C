#include<conio.h>
#include<stdio.h>
void main()
{
char str[100];
int cd=0,ca=0,cs=0,csp=0,co;
clrscr();
printf("Enter a String:");
gets(str);
for(co=0;str[co]!=NULL;co++)
{
if(str[co]>='0'&&str[co]<='9')
cd++;
else if((str[co]>='A'&str[co]<='Z')||(str[co]>='a'&str[co]<='z'))
ca++;
else if(str[co]==' ')
csp++;
else
cs++;
}
printf("\n Digits=%d \n Alphabets=%d \n Space=%d \n Special Charector=%d",cd,ca,csp,cs);
getch();
}














