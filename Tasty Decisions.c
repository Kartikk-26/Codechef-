#include <stdio.h>

int main(void) {
  int k;
  scanf("%d",&k);
  while(k--){
      int m,q;
      scanf("%d%d",&m,&q);
      int w=m*2;
      int c=q*5;
      if(w>c){
          printf("Chocolate\n");
      }
      else if(w==c){
          printf("Either\n");
      }
      else{
          printf("Candy\n");
      }
  }
  return 0;
}
