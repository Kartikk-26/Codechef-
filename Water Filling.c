#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int B1, B2, B3,total;
        scanf("%d %d %d",&B1,&B2,&B3);
        total= B1 + B2 + B3;
        if(total<=1)
        {
            printf("Water filling time\n");
        }
        else
        {
            printf("Not now\n");
        }
        t--;
    }
    
}

