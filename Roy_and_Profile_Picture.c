#include<stdio.h>
int main()
{
    int i,n,h,o,w;
    scanf("%d",&o);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&w,&h);
        if(w>=o && h>=o)
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
        else if(w<o || h<o)
        {
            printf("UPLOAD ANOTHER
");
        }
    }
    return 0;
}