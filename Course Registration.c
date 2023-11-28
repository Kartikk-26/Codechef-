#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	    int n,m,k;
	    scanf("%d%d%d",&n,&m,&k);
	    if(n+k<=m)
	    {
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	    t--;
	}
	return 0;
}

