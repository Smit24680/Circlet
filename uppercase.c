#include<stdio.h>
int main() {

    char str[10];

    gets(str);

    for(int a = 0; a < 10; a++){
        str[a] = str[a] - 32;
       
    }

     puts(str);

    return 0;
}