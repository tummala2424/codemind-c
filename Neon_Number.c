#include<stdio.h>
int main()
{
    int n,s=0,d,k=0;
    scanf("%d",&n);
    k=n*n;
    while(k)
    {
        d=k%10;
        k=k/10;
        s=s+d;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}