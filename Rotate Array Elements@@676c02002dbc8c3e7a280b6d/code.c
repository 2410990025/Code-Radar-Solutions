// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for (int i=0;i<n;i++){
        printf("%d",rotatearray(arr,n,k));
    }
}
void rotatearray(int arr[],int n,int k){
    k=k%n;
    for(int i=k;i<n;i++){
        for(int j=0;j<n-k;j++){
            printf("%d",arr[j]);
        }
        printf("\n");
    }
}