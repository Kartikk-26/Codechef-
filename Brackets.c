#include <stdio.h>
#include <string.h>
int main(void) {
    int t;
    scanf("%d\n",&t);
    while (t--)
    {
       char a[100000];
       int bal=0;
       int maxbal=0;
       scanf("%s",a);
       int l=strlen(a);
       for (int i=0;i<l;i++){
           if (a[i]=='(') bal++;
           if (a[i]==')') bal--;
           if (bal>maxbal) maxbal=bal;
       }
       for (int i=0;i<maxbal;i++){
           printf("(");
       }
       for (int i=0;i<maxbal;i++){
           printf(")");
       }
       printf("\n");
    }
	// your code goes here
	return 0;
}
