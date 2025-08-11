#include<stdio.h>
int main(){
    float a,b,c;
    printf("ENTER GROSS SALARY:");
    scanf("%f",&a);
    b=0.1*a;
    c=0.03*a;
    printf("NET SALARY=%f",a+b-c);
}