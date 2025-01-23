#include <stdio.h>

int main(){
    int d,m,y;
    printf("Enter number of days : ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    printf("years : %d months : %d days : %d ",y,m,d);    
    return 0;
}