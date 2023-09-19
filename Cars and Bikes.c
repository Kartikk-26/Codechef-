#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    if(n%4==0)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

