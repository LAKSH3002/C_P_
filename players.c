#include<stdio.h>
struct cr
{
    int r, m, b;
    char n[30],t[30];
};
int main()
{
    struct cr c[100],k;
    int n,i,j;
    printf("ENTER NUMBER OF PLAYERS\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER NAME OF PLAYER , TEAM NAME , RUNS , MATCHES AND BOUNDARIES\n");
        scanf("%s%s%d%d%d",c[i].n,c[i].t,&c[i].r,&c[i].m,&c[i].b);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-2;j++)
        {
            if(c[j].r<c[j+1].r)
            {
                k=c[j];
                c[j]=c[j+1];
                c[j+1]=k;
            }
        }
    }
    printf("PLAYER  TEAM   RUNS   MATCHES  BOUNDARIES\n");
    for(i=0;i<n;i++)
    {
        printf("%s   %s    %d    %d   %d   %d",c[i].n,c[i].t,c[i].r,c[i].m,c[i].b);
    }
}