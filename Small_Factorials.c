#include<stdio.h>
int main()
{
    int i,j,n,fac=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fac=1;
        for(j=arr[i];j>=1;j--)
        {
            fac=fac*j;
        }
        printf("%d
",fac);
    }
    return 0;
}