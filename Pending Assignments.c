#include<stdio.h>
int main()
{
    int n,x,y,z,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        int t;
        float d;
        t=x*y;
        d=z*60*24;
        if(t<=d)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
