/*#include<stdio.h>
int main()
{
    int i,x;
    int k;
    char ch ='A';
        for(i=1;i<=4;i++)
        {
            for(k=4;k>=i;k--)
            {
                printf("  ");
            }
            for(x=1;x<=i;x++)
            {
                printf(" %c ",ch); // i will print A BB CCC DDDD
            }                   // x will print A AB ABC ABCD   
            printf("\n");
            ch++;
        }
}*/

/*#include<stdio.h>
int main()
{
    int i,j;char x='A';
    for(i=1;i<=5;i++)                           A
        {                                       B C
            for(j=1;j<=i;j++)                   D E F
            {                                   G H I J
                printf("%c",x);
                x=x+1;
            }                     
            printf("\n");
}
}*/

/*#include<stdio.h>
int main()
{
    int i , j;
    char s[]="MUSKAN";
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
}*/



/*#include<stdio.h>
int main()
{
    int i , j,x;
    char s[]="MUSKAN";
    for(i=0;i<6;i++)
    {
        for(x=5;x>=i;x--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%c  ",s[j]);
        }
        printf("\n");
    }
    for(i=4;i>=0;i--)
    {
        for(x=5;x>=i;x--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%c  ",s[j]);
        }
        printf("\n");
    }
}*/

#include<stdio.h>
int main()
{
    int i,j,y;char x='A';
    for(i=1;i<=5;i++)
        {
            for(y=5;y>=i;y--)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf(" %c ",x);
                x=x+1;
            }                     
            printf("\n");
}
}
