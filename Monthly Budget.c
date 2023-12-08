#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>=30*y){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}
	return 0;
}

