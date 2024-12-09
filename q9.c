//Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
void merge(int arr1[],int arr2[],int n,int merged[]){
    int i=0,j=0,k=0;
    while(i<n && j<n){
        if(arr1[i]>arr2[j]){
            merged[k++]=arr1[i++];
        }
        else{
            merged[k++]=arr2[j++];
        }
    }
    while(i<n){
        merged[k++]=arr1[i++];
    }
    while(j<n){
        merged[k++]=arr2[j++];
    }
   
}    
void print_Merge_arr(int arr[],int n){

    int a;
    for(a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
      printf("\n");
}

int main(){
   int s,j,k;
   printf("enter the size of the array : ");
   scanf("%d",&s);
   int arr1[s],arr2[s];
   printf("enter the elements of the 1st array :");
   for(j=0;j<s;j++){
    scanf("%d",&arr1[j]);
   }
    printf("enter the elements of the 2nd array :");
    for(k=0;k<s;k++){
        scanf("%d",&arr2[k]);
    }
    int merged[2*s];
    merge(arr1,arr2,s,merged);
    printf("merged array in descending order : ");
    print_Merge_arr(merged,2*s);
}
    