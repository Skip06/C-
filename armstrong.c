#include <stdio.h>
#include <math.h>
int main(){
    int n,d,c=0,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int dup=n;
    int a=n;
    while (n!=0){   //to calculate number of digits
        n=n/10;
        c+=1;
    }
    while (dup!=0)
    {
        d=dup%10;
        dup=dup/10;
        s+=pow(d,c);
    }
    if (a==s){
        printf("Armstrong number,");
    }
    else{
        printf("Not an armstrong number.");
    }
    return 0;
}