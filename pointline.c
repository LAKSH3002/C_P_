#include<stdio.h>
int main()
{
    printf("ENTER COORDINATES x1 AND y1");
    int x1,y1;
    scanf("%d%d",&x1,&y1);
    printf("ENTER COORDINATES x2 AND y2");
    int x2,y2;
    scanf("%d%d",&x2,&y2);
    printf("ENTER COORDINATES x3 AND y3");
    int x3,y3;
    scanf("%d%d",&x3,&y3);
    printf("NOW WILL CHECK IF ALL THREE POINTS LIE ON THE SAME LINE OR NOT\n");
    int m1,m2,m3;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    m3=(y3-y1)/(x3-x1);
    if(m1==m2 && m2==m3 && m1==m3) 
    {
        printf("ALL THREE POINTS LIE ON THE SAME LINE");
    }
    else
    {
        printf("ALL THREE POINTS DONT LIE ON THE SAME LINE");
    }
}