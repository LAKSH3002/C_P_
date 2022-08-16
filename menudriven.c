#include<stdio.h>
void sum(int x,int y);
void subract(int x,int y);
void product(int x,int y);
void divi(int x,int y);
void mod(int x,int y);
int main()
{
    int a,b,n;
    char in;
    printf("ENTER FIRST NUMBER\n");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER\n");
    scanf("%d",&b);
    do
    {
    printf("ENTER A VALUE FROM THE GIVEN CHOICE\n");
    printf("1 TO ADD NUMBERS\n"); 
    printf("2 TO SUBRACT NUMBERS\n"); 
    printf("3 TO MULTIPLY NUMBERS\n"); 
    printf("4 TO DIVIDE NUMBERS\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        sum(a,b);
        break;
        case 2:
        subract(a,b);
        break;
        case 3:
        product(a,b);
        break;
        case 4:
        divi(a,b);
        break;
        case 5:
        mod(a,b);
        break;
        default:
        printf("INVALID INPUT");
    }
    printf("DO YOU WANT TO COTNIUE?\n");
    printf("ENTER Y FOR YES AND N FOR NO");
    scanf("%s",&in);
    }    /* code */
    while (in=='Y'|| in=='y');
}
void sum(int x,int y)
{
    int c;
    c=x+y;
    printf("SUM OF TWO NUMBERS IS %d\n",c);
}
void subract(int x,int y)
{
    int s;
    s=x-y;
    printf("DIFFERENCE OF TWO NUMBERS IS %d\n",s);
}
void product(int x,int y)
{
    int p;
    p=x*y;
    printf("PRODUCT OF TWO NUMBERS IS %d\n",p);
}
void divi(int x,int y)
{
    int d;
    d=x/y;
    printf("DIVISION OF TWO NUMBERS IS %d\n",d);
}
void mod(int x,int y)
{
    int m;
    m=x%y;
    printf("REMAINDER OF NUMBER IS %d",m);
}