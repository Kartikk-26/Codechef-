#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        int a;
        scanf("%d",&a);
        
        int arr[a];
        int c=0;
        
        for(int j=0;j<a;j++){
            scanf("%d",&arr[j]);
            if(arr[j]%2!=0){
                c++;
            }
        }
        if(c%2!=0 && a>1){
            printf("2\n");
        }
        else{
            printf("1\n");
        }
    }
    return 0;
}

