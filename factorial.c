#include<stdio.h>
int main() {

    int a = 5, b, result = 1;
    for(b = 1; b<=a; b++){
        result = result*b;
    }
   
        printf("Factorial is %d", result);
    

    return 0;
}