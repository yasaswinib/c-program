#include<stdio.h>
int main()
{
 int a,b,c,d;
 printf("key in first number");
 scanf("%d",&a);
 printf("key in second number");
 scanf("%d",&b);
 printf("key in third number");
 scanf("%d",&c);
 d=(a-b)%c;
 printf("the input values of %d & %d  are\n",a,b,c);
 printf("the modul of three numbers are %d\n",d);
}
