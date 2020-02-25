#include<stdio.h>
int main()
{
int e,m,s,k,t,a,b;
printf("marks in english");
scanf("%d",&e);
printf("marks in maths");
scanf("%d",&m);
printf("marks in science");
scanf("%d",&s);
printf("marks in kannada");
scanf("%d",&k);
printf("marks in telugu");
scanf("%d",&t);
b=e+m+s+k+t;
a=(e+m+s+k+t)*0.2;
printf("the sum of 5 subjects is %d\n the average of 5 subjects is %d\n",b,a);
}
