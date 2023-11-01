#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d%d%d",&a,&b,&c);
	    d=a+b+c;
	    if(d>=100&&a>=10&&b>=10&&c>=10)
	    printf("pass\n");
	    else
	    printf("fail\n");
	}
	return 0;
}
