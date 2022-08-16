#include<stdio.h>
int main()              // 
{
    int i,x,y;
        for(i=1;i<=5;i++)//for generating columns // for loop 1 // 1 
        {
            for(x=5;x>=i;x--)//for space // for loop 2 for space 
            {
                printf(" ");
            }
            for(y=1;y<=i;y++)// for loop 3 for printing elements
            {
                printf("*");// i will print 1 22 333 in an equilateral triangle and 
                                  // y will print 1 12 123 in the equilateral trainagle.
            }
            printf("\n");
        }
        for(i=4;i>=1;i--)
        {
            for(x=5;x>=i;x--)
            {
                printf(" ");
            }
            for(y=1;y<=i;y++)
            {
                printf("*");
            }
            printf("\n");
        }
}