#include<stdio.h>
int main()
{
    int i,c=0,r,k,I;
    scanf("%d%d%d",&I,&r,&k);
    for(i=I;i<=r;i++)
    {
        if(i%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}