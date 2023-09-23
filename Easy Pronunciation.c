#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	char s[100];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int count=0;
	    scanf("%d",&n);
	    scanf("%s",&s);
	    for(int j=0;j<n;j++){
	        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
	            count=0;
	        }
	        else{
	            count++;
	            if(count>=4) break;
	        }
	    }
	    if(count>=4) printf("NO\n");
	    else printf("YES\n");
	}
	
	return 0;
}

