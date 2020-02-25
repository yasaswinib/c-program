#include<stdio.h>
int main()
{
int a,b,h,c,p;
printf("height of triangle");
scanf("%d",&b);
printf("base of triangle");
scanf("%d",&h);
printf("third side of the triangle");
scanf("%d",&c);
a=b*h*0.5;
p=b+h+c;
printf("the area of triangle is %d\n the perimeter of triangle is %d\n",a,p);
}
