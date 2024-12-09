//Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.
#include<stdio.h>
int repeat(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
        return arr[i];
        }
        
}

int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array :");
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result =repeat(arr,n);
    printf("%d",result);

}