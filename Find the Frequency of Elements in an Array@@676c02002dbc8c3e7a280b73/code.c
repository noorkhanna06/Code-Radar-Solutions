#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int freq[n]={0};
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        freq++;
    }
    for(i=0;i<n;i++){
    if(freq>0){
        printf("%d %d\n",arr[i],freq);
        }
        break;
    }
}