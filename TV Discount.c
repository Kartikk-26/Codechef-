#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    int z=a-c;
	    int y=b-d;
	    if(z<y){
	        printf("First\n");
	    }
	    else if(z>y){
	        printf("Second\n");
	    }
	    else{
	        printf("Any\n");
	    }
	}
	return 0;
}

