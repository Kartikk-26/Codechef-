#include <stdio.h>

int main(void) {
	int test,choc,divi;
	scanf("%d",&test);
	for(divi=0;divi<test;divi++){
	scanf("%d",&choc);
	if(choc%2==0){
	    printf("yes\n");
	}
	else{
	    printf("no\n");
	}
	   
	}
	return 0;
}

