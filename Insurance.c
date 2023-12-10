#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x>y){
	        printf("%d\n",y);
	    }
	    else if(x==y){
	        printf("%d\n",x);
	    }
	    else{
	        printf("%d\n",x);
	    }
	}
	return 0;
}

