#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    largest=arr[0];
    for(i=0;i<n;i++){
        if (largest<arr[i]){
            largest=arr[i];
        }
    }
    min=arr[0];
     for(i=0;i<n;i++){
        if (min>arr[i]){
            min=arr[i];
        }
     }
     printf("%d %d",largest,min);
}