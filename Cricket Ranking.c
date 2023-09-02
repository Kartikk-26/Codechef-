#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int R1,W1,C1,R2,W2,C2;
	    scanf("%d%d%d%d%d%d",&R1,&W1,&C1,&R2,&W2,&C2);
	    if((R1>R2 && W1>W2) ||(R1>R2 && C1>C2) ||(C1>C2 && W1>W2))
	    printf("A\n");
	    else
	    printf("B\n");
	}
	return 0;
}

