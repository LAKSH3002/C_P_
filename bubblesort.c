#include<stdio.h>
int main()
{
    //bubble sort
    int a[]={30,40,10,60,50,20};
    int i,x ,temp;
    for(i=1;i<6;i++)// 1 2nd time 3 // REPITION OF PROCESS
    {
        for(x=0;x<6-i;x++)  //0-5 1-4 2-3
        {
            if(a[x]>a[x+1])// (0>1 1>2 2>3 3>4 4>5) (1>2 2>3 3>4) (2>3 3>4)
            {               
                temp = a[x];
                a[x]=a[x+1];
                a[x+1]=temp;
            }
        }
    }
    printf("SORTED ELEMNTS ARE \n");
    for(i=0;i<6;i++)
    {
    printf("%d  ",a[i]); 
    }
}