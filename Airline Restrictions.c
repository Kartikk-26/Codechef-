#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,d,e;
	    int T=0;
	    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	    if((a+b)<=d && c<=e)
        printf("\nYES");
        else if((a+c)<=d && b<=e)
        printf("\nYES");
        else if((b+c)<=d && a<=e)
        printf("\nYES");
        else
        printf("\nNO");
	}
	return 0;
}

