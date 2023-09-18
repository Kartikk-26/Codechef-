#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    scanf("%d%d",&x,&y);
	    z=x*y;
	    if(z>=10000 & z<=99999)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}

	return 0;
}

