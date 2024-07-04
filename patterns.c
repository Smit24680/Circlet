//Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.

// #include<stdio.h>
// int main() {

// int start = 40;
//     for(int a = 1; a <= 5; a++){

//         for(int b = 1; b <= a; b++){

//             printf("%d ",b + start);
//         }
//         printf("\n");
//     }


//     return 0;
// }


//Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.

#include<stdio.h>
int main() {

int start = 10;

    for(int a = 1; a <= 4; a++){

        for(int b = 1; b <= a; b++){

            start++;
            printf("%d ",start);
        }

        printf("\n");
    }


    return 0;
}