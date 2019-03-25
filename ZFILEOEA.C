#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
FILE *all,*odd,*even;
int num,i,rec;
clrscr();
printf("Enter a Number:");
scanf("%d",&rec);
all=fopen("ANY NUMBER","w");
for(i=1;i<=rec;i++)
{
scanf("%d",&num);
if(num==-1)
break;
putw(num,all);
}
fclose(all);
all=fopen("ANY NUMBER","r");
even=fopen("EVEN NUMBER","w");
odd=fopen("ODD NUMBER","w");
while((num=getw(all))!=EOF)
{
if(num%2==0)
putw(num,even);
else
putw(num,odd);
}
fclose(all);
fclose(even);
fclose(odd);
even=fopen("EVENNUMBER","r");
odd=fopen("ODDNUMBER","r");
printf("THE EVEN NUMBERS ARE");
while((num=getw(even))!=EOF)
printf("%4d",num);
printf("\nTHE ODD NUMBERS ARE");
while((num=getw(odd))!=EOF)
printf("%4d",num);
fclose(even);
fclose(odd);
getch();
}