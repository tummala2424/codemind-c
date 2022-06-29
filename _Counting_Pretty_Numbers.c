#include<stdio.h>
int main()
{
    int i,j,n,r,c,d,L;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%d%d",&L,&r);
        for(j=L;j<=r;j++)
        {
            d=j%10;
            if(d==2 || d==3 || d==9 )
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}