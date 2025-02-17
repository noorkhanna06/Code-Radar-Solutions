#include<stdio.h>
int main(){
    int a;
    int result;
    scanf("%d",&a);
    result= a & -a;
    printf("%d",result);

}