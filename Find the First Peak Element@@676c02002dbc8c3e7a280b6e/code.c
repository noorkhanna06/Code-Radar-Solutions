#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d element:\n",n);
    for(i=0;i<n;i++){
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
        }
    printf("%d",arr[n]);
    for(i=0;i<n;i++){
        if((arr[i]<arr[i+1]) && arr[i]<arr[i-1]){
            printf("%d",arr[i]);
        }
    }

}