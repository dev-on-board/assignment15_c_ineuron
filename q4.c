//Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include<stdio.h>
void rotate(int arr[],int n,int r){
   for(int i=0;i<r;i++){
    int temp;
    temp=arr[0];
    int j;
    for(int j=0;j<n-1;j++){
        arr[j]=arr[j+1];
     }
    arr[n-1]=temp;
   }

}



int main(){
    int n,r;
    printf("enter the size of the array :\n");
    scanf("%d",&n);
    int arr[n],i;
    printf("enter the elements of the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nenter the times you want to rotate left : ");
    scanf("%d",&r);
    rotate(arr,n,r);
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}