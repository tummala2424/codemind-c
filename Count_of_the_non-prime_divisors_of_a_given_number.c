#include<stdio.h>
int main()
{
    int i,j,c=0,k=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c>0)
            {
                k++;
            }
        }
    }
    printf("%d",k+1);
    return 0;
}