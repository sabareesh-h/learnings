#include<stdio.h>
void merge(int arr[],int left,int mid,int right){
    int n1=mid-left+1;                       //3   
    int n2=right-mid;                       //3
    int *L=(int*)malloc(n2*sizeof(int));    //left size allocation
    int *R=(int*)malloc(n2*sizeof(int));    //right size allocation
    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }                               //feeding the value in the L array
    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j];          //feeding the value in the R array
    }
    int i=0;
    int j=0;
    int k=left;                     //k=0
    while (i<n1 && j<n2){             
        if(L[i]<=R[j]){                //L[0]=12 !<= 5
            arr[k]=L[i];        
            i++;
        }
        else{
            arr[k]=R[j];                //arr[0]=5;
            j++;                         //j=1
        }
        k++;                        //k=1;
    }
    while(i<n1){            //0<3
        arr[k]=L[i];    //arr[1]=12;
        i++;            //i=1
        k++;            //k=2
    }
    while(j<n2){        //1<3
        arr[k]=R[j];    //arr[2]=6
        j++;            //j=2
        k++;            //k=3
    }

    free(L);
    free(R);

    
    
}
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2; // finding the middle index of an array
        mergesort(arr,left,mid);   //sorting the left side of the middle   ■
        mergesort(arr,mid+1,right);    //sorting the left side of the middle    
        merge(arr,left,mid,right);   //merge the left and right
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={12,11,13,5,6,7};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,arr_size);
    mergesort(arr,0,arr_size-1);
    printArray(arr,arr_size);
}