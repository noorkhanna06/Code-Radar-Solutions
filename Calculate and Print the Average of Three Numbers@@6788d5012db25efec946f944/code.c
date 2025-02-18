#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    float avg;
    
    // float avg=(float)int avg;
    scanf("%d %d %d",&a,&b,&c);
    float avg=(a+b+c)/3;
    printf("Average: %.2f",avg);

}