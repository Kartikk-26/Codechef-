#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],cnt,count=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            cnt=0;
           for(int j=0;j<=n-1;j++){
               if(a[i]==a[j]){
                   cnt++;
               }
           }
           if(count<cnt)
           count=cnt;
           
        }
        printf("%d\n",n-count);
    }
    return 0;

}

