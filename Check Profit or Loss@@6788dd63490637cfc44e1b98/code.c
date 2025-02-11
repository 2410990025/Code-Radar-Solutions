#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-b;
    if(c>0)
    printf("Profit");
    else if(a<0)
    printf("Loss");
    else
    printf("No Profit No Loss");
    return 0;
}