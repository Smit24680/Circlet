// #include<stdio.h>
// int main() {

//     int length = strlen("hello");                        //length
//     printf("%d",length);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main() {

//     char upper[10] = "hello";                            //uppercase

//     printf("%s", strupr(upper));

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main() {

//     char lower[10] = "HELLO";                             //lowercase

//     printf("%s", strlwr(lower));

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int main() {

//     char str[10];                                            
    
//     strcpy(str, "hello");                                 //copy

//     printf("%s", strupr(str));

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int main() {

//     char str[10] = "Hello" ;                              //replace

//     strcpy(str, "Smit");
//     printf("%s",str);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main() {

//     char str[10] = "Hello" ;                              //reverse

//     printf("%s",strrev(str));

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main() {

//     char str[10] = "Hello ";
//     char str2[10] = "World";
    
//     strcat(str,str2);                                        //concatenate

//     printf("%s",str);

//     return 0;
// }


#include<stdio.h>
#include<string.h>

int main() {         

    printf("%d\n",strcmp("apple","apple"));                     //compare

    printf("%d\n",strcmp("apple","Apple"));

    printf("%d\n",strcmp("Apple","apple"));

    return 0;
}