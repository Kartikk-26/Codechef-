#include<stdio.h>
int main(){
    int  t;
    scanf("%d", &t);
    while(t--){
        int p, m, v, d;
        
        scanf("%d %d %d", &p, &m, &v);
        d= (m-(p-1))*v;
        printf("%d\n", d);
        
    }
}
