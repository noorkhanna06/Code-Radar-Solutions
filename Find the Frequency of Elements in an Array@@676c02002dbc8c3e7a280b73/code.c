#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int freq=0;
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        freq++;
        printf("%d %d\n",arr[i],freq);
    }
   

}