#include <stdio.h>

int main(void) {
	int r;
	scanf("%d",&r);
	if(r>=1 && r<=50)
	printf("\n100");
	else if(r>=51 && r<=100)
	printf("\n50");
	else
	printf("0");
	return 0;
}

