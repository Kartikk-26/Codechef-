#include <stdio.h>

int main(void) {
	// your code goes here
	int n,t[100],even=0,odd=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&t[i]);
	}
	
	for(int i=0;i<n;i++)
	{
	    if(t[i]%2==0){
	        even++;
	    }
	    
	}
	
	for(int i=0;i<n;i++)
	{
	    if(t[i]%2!=0){
	        odd++;
	    }
	    
	}
	if(even>odd)
	printf("READY FOR BATTLE\n");
	else
	printf("NOT READY\n");
	
	
	
	return 0;
}

