#include <stdio.h>

int main(void) {
    int kf;
    scanf("%d",&kf);
    while(kf--){
        int hf,kn,opb,je;
        scanf("%d%d",&hf,&kn);
        opb=kn*2;
        je=hf*15;
        if(je>=opb) printf("YES\n");
        else printf("NO\n");
    }
	// your code goes here
	return 0;
}
