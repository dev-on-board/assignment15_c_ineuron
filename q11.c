//take value and print using pointer 
#include<stdio.h>
void input(int *p, int size){
    int i;
    printf("enter %d size : ",size);
    printf("enter the elements of the array : ");
    for(i=0;i<size;i++){
       scanf("%d",(p+i));
    }
}
void display(int *p,int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",*(p+i));
    }
}
int main(){
    int a[10];
    input(a,10);
    display(a,10);
    printf("\n");
    return 0;
}