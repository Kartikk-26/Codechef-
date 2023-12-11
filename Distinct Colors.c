#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n],i,max=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    max=0;
	    for(int i=0;i<n;i++){
	        if(a[i]>max){
	            max=a[i];
	        }
	    }
	    printf("%d\n",max);
	}
	return 0;
}

