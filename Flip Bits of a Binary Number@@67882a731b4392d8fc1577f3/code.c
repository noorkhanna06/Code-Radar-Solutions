#include<stdio.h>
int main(){
    unsigned int a;
    scanf("%u", &a);
    unsigned int result= ~a;
    printf("%u",result);
}