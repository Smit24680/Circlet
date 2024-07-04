// #include<stdio.h>
// int main(){

//     for(int a = 1;a<=4;a++){
//         for(int b = 1;b<=4;b++){
//         printf("*");
//         }
//         printf("\n");
//     }


//     return 0;
// }

// #include<stdio.h>
// int main(){

//     for(int a = 1;a<=4;a++){
//         for(int b = 1;b<=a;b++){
//             printf("%d ",b);
//         }
//         printf("\n");
//     }


//     return 0;
// }

#include<stdio.h>
int main(){

    for(int a = 1;a<=4;a++){
        if(a==1||a==4){
            for(int b = 1;b<=4;b++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            for(int b = 1;b<=1;b++){
                printf("*     *\n");
            }
        }
    }
    return 0;
}