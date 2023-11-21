#include<stdio.h>
int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>(b+c) || b>(a+c) || c>(a+b))
        printf("Yes\n");
        else
        printf("No\n");
    }
}   
    
