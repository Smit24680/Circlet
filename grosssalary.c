#include<stdio.h>
int main() { 
    float a,b=10,c=5,d=8,e;

    printf("Enter the Base Salary :");
    scanf("%f",&a);


    e = a+(a*b/100)+(a*c/100)+(a*d/100);
    printf("Gross Salary is : %.2f",e);

    return 0;
}