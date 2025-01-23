#include <stdio.h>

int main(){
    int n,d,c=0,rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int dup=n;
    while (n!=0){
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if (rev==dup)
    {
        printf("Palindrome Number.");
    }
    else
    {
        printf("Not a palindrome number.");
    }
        
    return 0;
}