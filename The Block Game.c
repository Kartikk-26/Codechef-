#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,r,sum=0,temp;
	    scanf("%d",&n);
	    temp=n;
	    while(n>0){
	        r=n%10;
	        sum=(sum*10)+r;
	        n=n/10;
	    }
	    if(temp==sum)
	    printf("wins\n");
	    else
	    printf("loses\n");
	}
	return 0;
}

