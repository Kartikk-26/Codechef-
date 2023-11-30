#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,x;
	    scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%d",&c);
	    scanf("%d",&x);
	    if((a+b)>=x||(b+c)>=x||(c+a)>=x){
	        printf("yes\n");
	    }
	    else{
	    printf("No\n");
	        
	    }
	}
	return 0;
}

