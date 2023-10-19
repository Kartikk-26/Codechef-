#include <stdio.h>
void result(){
    
}
void task(int N){
    int a,b;
    for(int i = 0;i < N;i++){
        scanf("%d%d",&a,&b);
        printf("%s\n",a>=b?"YES":"NO");
    }
}
int main(void) {
    int N;
    scanf("%d",&N);
    task(N);
    
	return 0;
}
