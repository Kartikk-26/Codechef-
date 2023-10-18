#include <stdio.h>
#include <stdlib.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[1500]={0};
        int n;
        scanf("%d",&n);
        int res[2*n];
        for(int i=0;i<2*n;i++)
        {
            scanf("%d",&res[i]);
        }
        for(int i=0;i<2*n;i++)
        {
            arr[res[i]]++;
        }
        int max=-1;
        for(int i=0;i<1500;i++)
        {
            if(max<arr[i])
            max=arr[i];
        }
        printf("%d\n",max);
    }
	return 0;
}

