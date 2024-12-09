//Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>
int findsmallest(int arr[],int size);
int main(){

    int size;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("%d is the size of the array",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int smallest = findsmallest(arr,size);
    printf("%d is the smallest number in the array",smallest);
    return 0;

}
int findsmallest(int arr[],int size){
     int min=arr[0];
     for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
     }
     return min;
}