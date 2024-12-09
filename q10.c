//Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void frequency(int arr[],int size ){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int maxi[max+1];
    for(int i=0;i<=max;i++){
        maxi[i]=0;
    }
    for(int i=0;i<size;i++){
        maxi[arr[i]]++;  
    }
    for(int i=0;i<=max;i++){
        if(maxi[i]>0)
        printf("%d - %d\n",i,maxi[i]);
    }
}

int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("neter the elements of the array : ");
    int l;
    for(l=0;l<n;l++){
        scanf("%d",&arr[l]);
    }
    frequency(arr,n);
   
}
    