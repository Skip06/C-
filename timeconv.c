#include <stdio.h>

int main(){
    int s,m,h;
    printf("Enter time in seconds : ");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("%d Hours %d Minutes %d Seconds",h,m,s);
    return 0;
}