#include <stdio.h>

int maximum(int a,int b, int c)
{
    int max=0,i;
    int arr[3]={a,b,c};
    for(i=0;i<3;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main(void) 
{
	int i,t,x,y,z,max;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d",&x,&y,&z);
	    max = maximum(x,y,z);
	    if(max==x)
	    printf("SETTER\n");
	    else if(max==y)
	    printf("TESTER\n");
	    else if(max==z)
	    printf("EDITORIALIST\n");
	}
	return 0;
}
