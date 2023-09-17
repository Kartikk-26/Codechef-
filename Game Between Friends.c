#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a<b)
	        a+=c;
	    else
	        b+=c;
	    if(a<b)
	        a+=d;
	    else
	        b+=d;
	    if(a<b)
	        printf("S\n");
	    else
	        printf("N\n");
	}	return 0;
}
