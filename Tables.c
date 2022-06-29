#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        if(i%2==1)
        {
            printf("%d x %d = %d
",x,i,x*i);
        }
    }
    return 0;
}