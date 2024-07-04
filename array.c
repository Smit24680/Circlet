/*#include<stdio.h>
int main() {

    int a[4],  b, c;

        for(b = 0; b < 4; b++){
        printf("Write an integer :");
        scanf("%d",&a[b]);
         }
    
    int x ,y = 0;
    printf("Enter which number do you want to find : ");
    scanf("%d",&x);

    for(c = 0; c < 4;c++){
        
        if(a[c] == x){
        y++;
        break;
        }
        
    }
    (y == 1)?  printf("%d is present in the index a[%d]",a[c],c):  printf("Number not found.");


    return 0;
}*/

/*#include<stdio.h>
int main() {
    int result = 0;
    int arr[4] = {5,4,6,3};
    for(int a = 0; a < 4; a++){
        if(result < arr[a]){
            result = arr[a];
        }
    }
    printf("%d",result);
    

    return 0;
}*/

#include<stdio.h>
int main() {
    int result = 0,x = 0;
    int arr[4] = {2,3,4,5};
    for(int a = 0; a < 4; a++){
        if(result < arr[a]){
            result = arr[a];
        }
    }
    for(int a = 0;a < 4;a++){
        if((arr[a] > arr [a + 1]) && arr[a] < result){
        x = arr[a];
        }
    }
    printf("%d",x);
    

    return 0;
}

/*#include<stdio.h>
int main() {

    int result;
    int arr[4] = {5,8,1,7};
    for(int a = 0;a < 4;a++){
        if(result > arr[a]){
            result = arr[a];
        }
    }
    printf("%d",result);

    return 0;
}*/

/*#include<stdio.h>
int main() {

    int result,x = 0;
    int arr[4] = {5,2,3,4};

    for(int a = 0;a < 4;a++){
        if(arr[a] < result){
        result = arr[a];
        }
    }
    for(int a = 0;a < 4;a++){
        if((arr[a] < arr[a + 1]) && arr[a] > result){
            x = arr[a];
        }
    }
        printf("%d",result);

    return 0;
}*/




