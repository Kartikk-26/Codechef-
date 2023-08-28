#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    scanf("%d%d",&x,&y);
	    z=x*5;
	    if(z<y){
	        printf("NO\n");
	    }
	    else if(z>y){
	        printf("YES\n");
	    }
	    else if(z=y){
	        printf("YES\n");
	    }
	}
	return 0;
}

