/*#include<stdio.h>
int main() {

    for(int a = 1;a<=10;a++){
        if(a == 3)
        {
            continue;
        }
        printf("%d\n",a);
    }


    return 0;
}*/

#include<stdio.h>
int main() {

    for(int a = 1;a<=10;a++){
        if(a == 3)
        {
            break;
        }
        printf("%d\n",a);
    }


    return 0;
}