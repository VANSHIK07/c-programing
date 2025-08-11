#include<stdio.h>
int main(){
    float a,b,area;
    printf("ENTER HEIGHT OF TRIANGLE:");
    scanf("%f",&a);
    printf("ENTER BASE OF TRIANGLE:");
    scanf("%f",&b);
    area=1/2.0*a*b;
    printf("AREA=%f",area);
}