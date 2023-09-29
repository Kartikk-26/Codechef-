#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--){
        int N,K;
        scanf("%d %d",&N,&K);
        int A[N];
        for(int i=0;i<N;i++){
            scanf("%d",&A[i]);
        }
        int remainingProtein=0;
        int day=0;
        for(int i=0;i<N;i++){
            remainingProtein+=A[i];
            if(remainingProtein<K){
                printf("NO %d\n",day+1);
                break;
            }
            remainingProtein-=K;
            day++;
        }
        if(day==N){
            printf("YES\n");
        }
    }
	return 0;
}

