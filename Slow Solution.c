#include <stdio.h>

int main() {
	int t ;
	scanf("%d",&t);
	if(t>=1&&t<=1000){
	for(int a=1;a<=t;a++){
	    int m1,m2,s;
	    scanf("%d %d %d",&m1,&m2,&s);
	    int c=s/m2;
	    if((s%m2==0&&c<=m1)||(s%m2!=0&&c<m1)){
	        printf("%d\n",(m2*m2)*c+(s%m2)*(s%m2));
	    }
	    else{
	        printf("%d\n",(m2*m2)*m1);
	    }
	    
	    
	}}
	return 0;
}

