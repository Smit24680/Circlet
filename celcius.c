#include<stdio.h>
int main() {

    float a;
    float b;
    printf("Enter temp in degree celsius :");
    scanf("%f",&a);

    b = ((a*9)/5)+32;
    printf("Entered temp is %.2f degree fahrenheit",b);


    return 0;
}