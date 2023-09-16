#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,x;
	    float b1=0,c1=0;
	    scanf("%d %d %d",&a,&b,&c);
	    for(int i=0;i<a;i++)
	    {
	        scanf("%d",&x);
	        if(x==b)
	            b1+=1;
            if(x==c)
                c1+=1;
	    }
	    printf("%f\n",(b1/a)*(c1/a));
	}
	return 0;
}
