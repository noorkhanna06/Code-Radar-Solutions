#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int freq[i];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        freq[arr[i]]++;
    }
    printf("%d %d",arr[i],freq[i]);

}