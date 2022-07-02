#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,c=0,d=0;
    scanf("%d%d",&n,&m);
    if(n==1)
    n=2;
    for(i=n;i<=m;i++)
    {
        d=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                d++;
            }
        }
        if(d==0)
        {
            printf("%d
",i);
        }
    }
    return 0;
}