#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,N;
	    scanf("%d %d",&N,&X);
	    if((N-X)<=X)
	    {
	        printf("\nYES");
	    }
	    else{
	        printf("\n NO");
	    }
	}
	return 0;
}

