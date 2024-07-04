#include<stdio.h>
int main() {

    int a,b,c;

    printf("Enter an integer a :");
    scanf("%d",&a);
    
    printf("Enter an integer b :");
    scanf("%d",&b);

    printf("Enter an integer c :");
    scanf("%d",&c);

    if(a == b && b== c){
        
        printf("All integers are same!");
    }

    else if(a == b && b < c){
        printf("c is greater and a = b");
    }
    
    else if(a == b && b > c){
        printf("c is smaller and a = b");
    }
    
    else if(a > b && b == c){
        printf("b and c are equal and smaller than a");
    }
    
    else if(a < b && b == c){
        printf("b and c are equal and greater than a");
    }
    
    else if(a == c && c < b){
        printf("a and c are equal and lesser than b");
    }
    
    else if(a == c && c > b){
        printf("a and c are equal and greater than b");
    }
    
    else if(a < c && b < c){
        printf("c is greatest among all");
    }
        else if(a < b && c < b){
        printf("b is greatest among all");
    }
        else if(b < a && c < a){
        printf("a is greatest among all");
    }
    else{
        printf("No information");
    }
    

    return 0;
}