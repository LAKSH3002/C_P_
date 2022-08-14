#include<stdio.h>
// WITHOUT USING FUNCTIONS
//ASSUMPTION IS 2*2 OR 3*3 OR 4*4
int main()
{
    int i,j,k;
    int a[3][3],b[3][3],c[3][3];
    // ELEMENTS OF A
    printf("ENTER ELEMENTS FOR MATRIX A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d ",&a[i][j]);
        }
        printf("\n");
    }
    // ELEMENTS OF B
    printf("ENTER ELEMENTS OF MATRIX B");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d ",&b[i][j]);
        }
        printf("\n");
    }
    //MULTIPLICATION PROCESS
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        c[i][j]=0;
        for(k=0;k<3;k++)
        {
        c[i][j]+=a[i][k]*b[j][k];
        }
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
}