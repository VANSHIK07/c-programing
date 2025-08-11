#include<stdio.h>
int main(){
    float a,b,c,avg,total;
    printf("ENTER MARKS OF MATHS:");
    scanf("%f",&a);
    printf("ENTER MARKS OF PHYSICS:");
    scanf("%f",&b);
    printf("ENTER MARKS OF CHEM:");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    total=a+b+c;
    printf("AVERAGE OF MARKS=%f",avg);
    printf("\nTOTAL MARKKS OOBTAINED=%f",total);

}