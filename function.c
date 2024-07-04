// #include<stdio.h>

// int cube(int x){  // parameter

// // return x*x*x;

// printf("%d", x*x*x);
// }

// int main(){

// int a = 6;

// // int result = cube(a);  // argument

// // printf("%d",result);

// cube(a);

// }

// #include<stdio.h>

// int factor(int a) {

//     if((a % 3 == 0) && (a % 5 == 0)){
//         return 1;
//     }
//     return 0;
// }

// int main() {

//     int a;

//     scanf("%d",&a);

//     int result = factor(a);

//     printf("%d",result);

//     return 0;
// }

// #include<stdio.h>

// int total(int arr[]) {

//     int ans = 0;
//     for(int a = 0; a < 5; a++) {
//         ans = ans + arr[a];
        
//     }
//     return ans;

// }

// int main() {

//     int arr[5];

//     for(int a = 0; a < 5; a++){
//         printf("Enter the value of arr[%d]",a);
//         scanf("%d",&arr[a]);
//     }

    

//     int result = total(arr);

//     printf("%d\n",result);

//     return 0;
// }

#include<stdio.h>

int total(int arr[]) {

    int ans = 0;
    for(int a = 0; a < 5; a++) {
        ans++;
        
    }
    return ans;

}

int main() {

    int arr[5];

    for(int a = 0; a < 5; a++){
        printf("Enter the value of arr[%d]",a);
        scanf("%d",&arr[a]);
    }

    

    int result = total(arr);

    printf("%d\n",result);

    return 0;
}