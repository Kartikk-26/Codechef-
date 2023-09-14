#include <stdio.h>

int main(void) {
	long long int T,N,K;
	scanf("%lld",&T);
	for(int i=0;i<T;i++)
	{
	    scanf("%lld%lld",&N,&K);
	     K=K*(K+1)/2;
	    if((N<K)?printf("NO\n"):printf("YES\n"));
	}
	return 0;
}

