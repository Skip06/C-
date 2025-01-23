#include <stdio.h>

int main(){
    int a[30],n,i,s=0;
    printf("Enter the number of elements of array : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    // Sum of Array elements : 
    // for(i=0;i<n;i++){
    //     scanf("%d",&a[i]);
    //     s+=a[i];
    // }
    // printf("Sum of elements of array : %d",s);

    //input of array
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


    //Print even elements
    // printf("Even elements : \n");
    // for(i=0;i<n;i++){
    //     if (a[i]%2==0){
    //         printf("%d\t",a[i]);
    //     }
    // }

    // printing all elements of array
    // for(i=0;i<n;i++){
    //     printf("%d\t",a[i]);
    // }

    //largest element of array
    // int max=a[0];
    // int flag; //to get index
    // for(i=0;i<n;i++){
    //     if (a[i]>max){
    //         max=a[i];
    //         flag=i;
    //     }
    // }
    // printf("Largest element of array is : %d at position %d\n",max,flag+1);

    //linear search
    // int x;
    // printf("Enter element to search : ");
    // scanf("%d",&x);
    // for(i=0;i<n;i++){
    //     if (a[i]==x){
    //         printf("Element is present at position %d",i+1);
    //         return 1;
    //     }
    // }
    // printf("Element not found..!!");

    // Insert element at desired position
    // int m,pos;
    // printf("Enter element to insert : ");
    // scanf("%d",&m);
    // printf("Enter position : ");
    // scanf("%d",&pos);
    // for(i=n;i>pos;i--){
    //     a[i]=a[i-1];
    // }
    // a[pos]=m;
    // n++;
    // for(i=0;i<n;i++){
    //     printf("%d\t",a[i]);
    // }

    //Delete element from required position
    // int pos,m;
    // printf("Enter position of element : ");
    // scanf("%d",&pos);
    // for (i=pos;i<n-1;i++){
    //     a[i]=a[i+1];
    // }
    // n--;
    // printf("Array after deletion: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", a[i]);
    // }
    // printf("\n");

    //Element-wise addition of two arrays
    int b[50],s=0,m;
    printf("Enter size of second array : ");
    scanf("%d",&m);
    for(i=0;i<m;i++){

    }    


    return 0;
}