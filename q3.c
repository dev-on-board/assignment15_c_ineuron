//Write a function to sort an array of any size. (TSRS)
//Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int sort(int arr[],int n);
int sort(int arr[],int n){
    int temp,i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }

}


int main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the numbers ");
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}