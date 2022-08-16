#include<stdio.h>
int main()
{
    int yr;
    printf("ENTER A YEAR FOR LEAP YEAR CHECK\n");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%4==0)
        printf("ITS A LEAP YEAR\n");
        else
        printf("ITS NOT A LEAP YEAR\n");
    }
    else
    {
        if(yr%4==0)
        printf("ITS A LEAP YEAR\n");
        else
        printf("ITS NOT A LEAP YEAR");
    }
}    