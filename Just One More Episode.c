#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    if(x>24)
	    puts("yes") ;
	    else
	    puts("no") ;
	}
	return 0;
}

