#include <stdio.h>
void RotateClockWise(int n, int arr[],int k){
    k=k%n;
    for(int i=n-k;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int j=0;j<n-k;j++){
        printf("%d ",arr[j]);
    }
}
int main() {
    int n,k;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter value:");
    for(int i=0;i<n;i++){        
        scanf("%d",&arr[i]);
    }
    printf("enter k:");
    scanf("%d",&k);
    RotateClockWise(n,arr,k);
}