#include<stdio.h>
int main() {

    int year;
    scanf("%d",&year);

    int x = year - 2001;
    
    
    int a = x/4;
    int b = x/100;
    int c = x/400;

    int leap = a+c-b;

    int days = x*365 + leap;

    int day = days%7;

    switch(day){
        case 0:
        printf("Monday");
        break;
    
        case 1:
        printf("Tuesday");
        break;
        
        case 2:
        printf("Wednesday");
        break;
        
        case 3:
        printf("Thursday");
        break;
        
        case 4:
        printf("Friday");
        break;
        
        case 5:
        printf("Saturday");
        break;
    
        case 6:
        printf("Sunday");
        break;}


   return 0;
}