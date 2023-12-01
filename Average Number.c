#include <stdio.h>

void luck() {
    int n, k, v, s=0;
    scanf("%d %d %d", &n, &k, &v);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        s+=a[i];
    }
    int q=0;
    q=v*(n+k)-s;
    if(q<=0 || q%k!=0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", q/k);
    }
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
	    luck();
	}
	
	return 0;
}

