#include<stdio.h>
int main()
{
    int n,s=0,i,r;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    printf("%d",s);
    return 0;
}