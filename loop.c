//For
// #include<stdio.h>
// int main() {

//     for(int i = 1; i <=10; i++) {
//         printf("2 x %d = %d\n",i,i*2);
//     }

//     return 0;
// }


//While
// #include<stdio.h>
// int main() {

//     int a = 0,i = 1,c;
//     while( i <=10) { 

//         a++;
//         i++;
//         c = a*i/2;
//     }
//             printf("%d",c);


//     return 0;
// }

// #include<stdio.h>
// int main() {

//     int result = 0,i = 1;
//     while (i<=10)
//     {
//         result = result + i;
//         i++;
//     }
    
//     printf("%d",result);

//     return 0;
// }

#include<stdio.h>
int main() {

    int a = -1;

    do{
        printf("%d\n",a);
        a++;
    }
    while (a<5);
    
    return 0;
}