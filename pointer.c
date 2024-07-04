// #include<stdio.h>
// int main() {

//     int x = 5;
//     int *ptr;          //int x = 5, *ptr = &x;
//     ptr = &x;

//     printf("%u\n",&x);

//     printf("%d", ptr);

//     return 0;
// }

 
// #include<stdio.h>
// int main() {

//     int x = 10;
//     int *ptr = &x;
//     *ptr = 4;

//     printf("%d",*ptr);


//     return 0;
// }


// #include<stdio.h>
// int main() {

//     int i = 10;
//     int *p, *q;
//     p = &i;

//     q = p;

//     printf("%d %d",*p, *q);


//     return 0;
// }


// #include<stdio.h>
// int main()  {
    
//     int a[5] = {1,2,3,4,5};
//     int *p = a;

//     printf("%d\n", p);
//     printf("%d\n", *p);

//     printf("%d\n", p + 1);
//     printf("%d\n", *(p + 1));

//     printf("%d\n", p + 2);
//     printf("%d\n", *(p + 2));


//     return 0;
// }



#include<stdio.h>
int main()  {
    
    int a[5] = {1,2,3,4,5};
    
    int sum = 0, *p;

    for(p = a; p <= a + 4 ; p++) {

        sum = sum + *p;
    }
        printf("%d\n",sum);

    return 0;
}