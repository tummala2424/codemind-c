#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,m,c=0,count;
    scanf("%d%d",&n,&m);
    if(n==1)
    n=2;
    for(i=n;i<=m;i++)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}