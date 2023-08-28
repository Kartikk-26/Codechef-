#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    float n,m,k;
	    scanf("%f%f",&n,&m);
	    k=n-n/10;
	    if(k>m){
	        printf("DINING\n");
	    }
	    else if(k<m){
	        printf("ONLINE\n");
	    }
	    else if(k=m){
	        printf("EITHER\n");
	    }
	}
	return 0;
}

