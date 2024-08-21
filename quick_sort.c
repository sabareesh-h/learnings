#include<stdio.h>
#include<stdlib.h>

void swap(int a[],int start,int end){
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
}
int partition(int a[],int start,int end){
    int pivot=a[end];
    int i=start-1;
   
    for(int j=start;j<end;j++){
        if(a[j]<pivot){
            i++;
            swap(a,i,j);
        }
    }
    
    swap(a,i+1,end);
    return i+1;
}
int quicksort(int a[],int start,int end){
    if(start<=end){
    int pivot=partition(a,start,end);
    quicksort(a,start,pivot-1);
    quicksort(a,pivot+1,end);
    }

    // int pivot=a[end-1];
    // int i=0,j=1;
    // while(j<end){
    //     if(a[j]<pivot){
    //         i++;
    //         swap(a,i,j);
    //     }
    //     else{
    //         j++;
    //     }
    // }

}
int main()
{
    int a[10] = {5,2,6,7,4,3,1,9,0,8};
    int size=10;
    quicksort(a,0,size-1);
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

}