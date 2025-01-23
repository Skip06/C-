#include <stdio.h>

int main(){
    int d1,d2,y1,y2,m1,m2,d,m,y;
    printf("Enter other date : ");
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("Enter current date (dd mm yyyy) : ");
    scanf("%d %d %d",&d2,&m2,&y2);
    y=y2-y1;
    m=m2-m1;
    if (m<0){
        y=y-1;
        m=m+12;
    }
    if (m>12){
        y=y+1;
        m=m-12;
    }
    d=d2-d1;
    if (d<0){
        d=d+30;
    }
    if (d>30){
        d=d-30;
        m=m+1;
    }
    printf("%d years %d months %d days",y,m,d);
    return 0;
}