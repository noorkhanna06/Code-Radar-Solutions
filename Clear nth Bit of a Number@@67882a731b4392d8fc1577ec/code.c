#include<stdio.h>
int main(){
    int a;
    int b;
    int result;
    scanf("%d",&a);
    scanf("%d",&b);
    result= a & ~(1<<b);
    printf("%d",result);

}