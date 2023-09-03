#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int G1,S1,B1,G2,S2,B2;
	    scanf("%d%d%d%d%d%d",&G1,&S1,&B1,&G2,&S2,&B2);
	    if(G1+S1+B1>G2+S2+B2)
	    printf("1\n");
	    else
	    printf("2\n");
	}
    	return 0;
}


