#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,h;
	    int c=0;
	    scanf("%d%d",&x,&h);
	    while(h>0){
	        c++;
	        if(c<=5){
	            h-=(x/2);
	        }
	        else{
	            h-=x;
	        }
	    }
	    printf("%d\n",c);
	    
	}
	return 0;
}

