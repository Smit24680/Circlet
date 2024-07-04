#include<stdio.h>
int main() {

    float a,b,c;

    printf("\nYOU CAN CHECK BY ENTERING THREE LINES THAT WHETHER THEY CAN MAKE A TRIANGLE OR NOT !\n\n");

    printf("Enter the first side :");
    scanf("%f",&a);

    printf("Enter the second side :");
    scanf("%f",&b);

    printf("Enter the third side :");
    scanf("%f",&c);    

    ((a+b)>c && (b+c)>a && (a+c)>b) ?
        printf("A TRIANGLE CAN BE FORMED WITH THESE THREE SIDES"):
    
        printf("NO TRIANGLE CAN BE FORMED WITH THESE THREE SIDES");
    


    return 0;
}