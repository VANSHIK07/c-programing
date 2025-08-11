#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("ENTER PRINCIPAL AMOUNT:");
    scanf("%f",&a);
    printf("ENTER R:");
    scanf("%f",&b);
    printf("ENTER N:");
    scanf("%f",&c);
    d=(a*b*c)/100;
    printf("INTEREST=%f",d);
}