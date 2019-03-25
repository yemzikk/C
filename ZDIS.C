#include<stdio.h>
#include<math.h>
void main()
{
float x1,y1,x2,y2,gdistance;
clrscr();
printf("Input X1:");
scanf("%f",&x1);
printf("Input y1:");
scanf("%f",&y1);
printf("Input X2:");
scanf("%f",&x2);
printf("Input y2:");
scanf("%f",&y2);
gdistance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("Distance Between 2 Points is %.4f",sqrt(gdistance));
printf("\n");
getch();
}
