//Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int duplicate(int arr[],int n){
    int i,j,count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        
    }
    return count;
        
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
    int result=duplicate(arr,n);
    printf("%d",result);
}