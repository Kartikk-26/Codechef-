#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(y%2==0)
	    printf("%d\n",(y+2)/2);
	    else if(y%2!=0)
	    printf("%d\n",(y+1)/2);
	}
	return 0;
}

