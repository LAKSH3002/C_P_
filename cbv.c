#include<stdio.h>
void swap(int *x ,int *y);
void sum(int x,int y);
int main()
{
int a=10; 
int b=20;
sum(a,b);
swap(&a,&b);
}
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("VALUES OF A AND B AFTER SWAPPING IS = %d\n",*x,*y); 
}
void sum(int x,int y)
{
    int c ;
    c=x+y;
    printf("SUM OF A AND B IS = %d\n",c);
}