#include <stdio.h>

int main(void) {
    int gwn;
    scanf("%d",&gwn);
    while(gwn--){
        int bv,md,ke;
        scanf("%d",&bv);
        md=4*bv;
        if(md<=1000) printf("YES\n");
        else printf("NO\n");
    }
	// your code goes here
	return 0;
}
