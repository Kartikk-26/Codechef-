#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x==y){
	        printf("%d\n",(y*2)-1);
	    }
	    else{
	        printf("%d\n",x+y);
	    }
	}
	return 0;
}

