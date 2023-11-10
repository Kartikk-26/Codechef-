#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,k;
	    scanf("%d%d%d",&n,&m,&k);
	    if(n<=(m*k))
	    printf("yes");
	    else
	    printf("no");
	    printf("\n");
	}
	return 0;
}

