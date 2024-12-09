//Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
int findgreatest(int arr[],int size);

int main(){
     int size;
     printf("enter the size of the array : ");
     scanf("%d",&size);
     int arr[size];
     printf("enter %d elements : \n",size);
     for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
     }
      int greatest=findgreatest(arr,size);

      printf("the greatest number in the array is %d",greatest);
      return 0;
     }



int findgreatest(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}