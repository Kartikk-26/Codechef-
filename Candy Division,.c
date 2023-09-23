#include <stdio.h>

int main(void) {
    int fdek;
    scanf("%d",&fdek);
    while(fdek--){
        int ker;
        scanf("%d",&ker);
        int hg=ker%3;
        if(hg==0) printf("YES\n");
        else printf("NO\n");
    }
	// your code goes here
	return 0;
}

