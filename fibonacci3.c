//FIBONNACI SERIES USING RECURSIVE FUNCTIONS

#include<stdio.h>
int fibrec(int n);
int main()
{
    printf("ENTER VALUE OF N TILL WHERE YOU WANT FIBONACCI SERIES\n");
    int nu=0; int f; int no;// 5
    scanf("%d",&no);
    for(int i=0;i<=no;i++) //0 to 5
    {
        printf("%d  ",fibrec(nu));// 0 1 
        nu++;
    }
}
int fibrec(int n)// 2 3 4 5
{
if(n==0 || n==1)
return n;
else
return (fibrec(n-1)+fibrec(n-2));// 1+0=1 , 1+1=2 , 2+1=3 ,3+2=5
}


//FIBONACCI SERIES IN NORMAL WAY
/*#include<Stdio.h>
int main()
{
    int a=0;
int b=1;
int c = a+b;
printf("ENTER ANY VALUE N FOR PRINTING FIBONACCI SERIES UPTILL THAT VALUE");
int n;
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
int i;
for(i=3;i<=n;i++)
{
    printf("%d",c);
    a=b;
    b=c;
    c=a+b;
}}*/

//FIBONACCI CAN ALSO BE AKSED TO PRINT USING FIBONACCI SERIES.