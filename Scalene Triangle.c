#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    if(a==b || b==c || c==a){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
	return 0;
}

