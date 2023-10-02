#include <stdio.h>

int main(void) 
{
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x>=y)
	    {
	        printf("\n%d",x-y);
	    }
	    else
	    {
	        printf("\n%d",0);
	    }
	}
	return 0;
}

