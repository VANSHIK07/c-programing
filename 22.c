#include<stdio.h>
int main(){
    float a,b,c;
    printf("ENTER GROSS SALES:");
    scanf("%f",&a);
    b=0.1*a;
    printf("NET SALARY=%f",a-b);
}