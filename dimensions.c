#include<stdio.h>
int main()
{
int a= 1189;
int b= 841;
int i,c;
printf("DIMENSIONS OF SHEETS ARE:\n");
for(i=0;i<=8;i++)
{
printf("DIMENSIONS OF A%d is %d:%d\n",i,a,b);
c=a/2;
a=b;
b=c;
}
}