#include<stdio.h>
int main(){
    int sp,cp;
    scanf("%d %d", &cp,&sp);
    if(cp>sp){
        printf("Loss");
    }
    else if (sp>cp){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
}