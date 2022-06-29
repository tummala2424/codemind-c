#include<stdio.h>
int main()
{
    int n,i,x=0,y=1,z;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        z=x+y;
        if(z==n)
        {
            printf("True");
            break;
        }
        if(z>n)
        {
            printf("False");
            break;
        }
        x=y;
        y=z;
    }
    return 0;
}