#include <stdio.h>

int main(void) {
	int a,b,c,d;
	scanf("%d",&a);
	while(a--){
	    scanf("%d %d %d",&b,&c,&d);
	    if(b+c <= d){
	        printf("2\n");
	    }
	    else if(d>=b ){
	        printf("1\n");
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}

