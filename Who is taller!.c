#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x<y)
	    printf("B\n");
	    else
	    printf("A\n");
	    
	}
	return 0;
}

