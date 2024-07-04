#include<stdio.h>
int main() {

    char str[1];

    printf("Enter a word : ");
    
    scanf("%[^.]s",str);

    puts(str);

    return 0;
}