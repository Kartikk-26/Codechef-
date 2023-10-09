#include <stdio.h>

void main(void) {
    int t,x,y;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d %d",&x,&y);
        printf("%d\n",y/x);
    }
}
