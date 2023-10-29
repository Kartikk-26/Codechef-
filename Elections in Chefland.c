#include <stdio.h>

int main(void) 
{
	int t,a,b,c;
	scanf("%d",&t);
	for(int i=0 ; i<t ; i++)
	{
	   scanf("%d%d%d",&a,&b,&c);
	   if(a>50 && b<=50 && c<=50)
	   {
	       printf("A\n");
	   }
	   else if(a<=50 && b>50 && c<=50)
	   {
	       printf("B\n");
	   }
	   else if(a<=50 && b<=50 && c>50)
	   {
	       printf("C\n");
	   }
	   else
	   {
	       printf("NOTA\n");
	   }
	}
	return 0;
}

