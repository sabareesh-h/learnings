#include<stdio.h>
void selection_sort(int arr[]){
    for(int i=0;i<9;i++){
        int min=i;
        for(int j=i+1;j<10;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int main(){
    int arr[10]={1,2,6,5,4,3,8,9,0,7};
    selection_sort(arr);
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}