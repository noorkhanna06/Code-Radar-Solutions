#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    float avg;
    
    // float avg=(float)int avg;
    scanf("%f %f %f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average: %.2f",avg);

}