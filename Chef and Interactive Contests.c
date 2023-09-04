#include <stdio.h>

int main(void) {
	// your code goes here
	int N,r,R;
	scanf("%d%d",&N,&r);
	for(int i=0;i<N;i++){
	    scanf("%d",&R);
	    if(R>=r)
	    printf("Good boi\n");
	    else 
	    printf("Bad boi\n");
	}
	return 0;
}



