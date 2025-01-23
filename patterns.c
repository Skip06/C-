#include <stdio.h>

int main(){
    int i,j;
    // 1
    // 1 2 
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    for (i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("\n");
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    for (i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("\n");

    // 1
    // 0 0
    // 1 1 1
    // 0 0 0 0
    // 1 1 1 1 1 
    int a=0,b=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%d\t",a);
            }
            else{
                printf("%d\t",b);
            }
        }
        printf("\n");
    }
    printf("\n");

    // 1
    // 1 2 3
    // 1 2 3 4 5
    // 1 2 3 4 5 6 7
    for(i=1;i<8;i+=2){
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("\n");

    //     *
    //    **
    //   ***
    //  ****
    // *****
    
    for (int i = 1; i <= 5; i++) {
        // Print spaces
        for (int j = 1; j <= 5 - i; j++) {
            printf("\t");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*\t");
        }
        printf("\n"); // Move to the next line
    }
   
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    // A B C D E F
    for (i=65;i<=70;i++){
        for(j=65;j<=i;j++){
            printf("%c\t",j);
        }
        printf("\n");
    }
    


    return 0;
}