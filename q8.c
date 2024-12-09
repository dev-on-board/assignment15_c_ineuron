//Write a function in C to print all unique elements in an array
#include<stdio.h>
int unique(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j])
            count=1;
        }
        if(count==0)
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
    printf("unique elemets are : \n");
    unique(arr,n);
    
}