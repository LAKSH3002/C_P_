//USING FUNCTIONS
#include<stdio.h>
int sum(int a[2][2],int b[2][2]);
int main()
{
    int i,j,s;
    int a[2][2],b[2][2];
    printf("ENTER ELEMENTS FOR MATRIX A\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("ENTER ELEMENTS OF MATRIX B");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n ");
    }
    s=sum(a,b);
}
int sum(int a[2][2], int b[2][2])
{
    int sum=0; int avg;
    int c[2][2];
    printf("ADDITION OF TWO MATRIX IS\n");
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];// FOR SUBRACTION:c[i][j]=a[i][j]-b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        sum=sum+c[i][j];
        }
    }
   // int avg;
    avg =sum/(2*2);
    printf("SUM OF MATRIX ELEMNTS IS %d\n",sum);
    printf("AVERAGE OF ELEMNTS OF MATRIX IS %d",avg);
    return 0;
}