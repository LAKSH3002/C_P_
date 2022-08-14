#include<stdio.h>
int main()
{
    int a[14]={10,20,30,40,50,60,70,80,90,100,110,120,130,140};// 30
    printf("ENTER THE POSITION FROM WHERE YOU WANT THE NUMBER TO BE DELETED\n");
    int pos;
    scanf("%d",&pos);//3
    int i,k,temp;
    int t = a[pos-1]; //30
    printf("NUMBER AT POSITION IS %d\n",t);;
    for(i=pos-1;i<14;i++)// 2 3 4 5 
    {
    a[i]=a[i+1];
    }
   
    printf("NEW SET OF DATA IS\n");
    for(k=0;k<14;k++)
    {
    printf("%d  ",a[k]);
    }
}