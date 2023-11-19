#include <stdio.h>

int main(void) {
	// your code goes here
	int T,C,X,Y;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d %d",&C,&X,&Y);
	    printf("\n%d",(C-X)*Y);
	}
	return 0;
}

