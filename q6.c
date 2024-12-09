//Write a function in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>
int reverse(int arr[],int n){
    int i;
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
        
}

int main(){
    int n;
    printf("enter the size of the array :");
    scanf("%d",&n);
    int arr[n],i;
    printf("enter %d elements : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
}