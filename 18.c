#include<stdio.h>
int main(){
    int a,b,area,per;
    printf("ENTER LENGTH OF RECTANGLE:");
    scanf("%d",&a);
    printf("ENTER BREADTH OF RECTANGLE:");
    scanf("%d",&b);
    area=a*b;
    per=2*(a+b);
    printf("AREA=%d",area);
    printf("\nPERIMETER=%d",per);
}