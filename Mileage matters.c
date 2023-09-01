#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    float N,X,Y,A,B;
	    scanf("%f%f%f%f%f",&N,&X,&Y,&A,&B);
	    float H=(N*X)/A;
	    float P=(N*Y)/B;
	    if(H>P)
	    printf("DIESEL\n");
	    else if(H<P)
	    printf("PETROL\n");
	    else 
	    printf("ANY\n");
	}
	return 0;
}

