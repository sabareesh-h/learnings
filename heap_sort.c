#include<stdio.h>
void swap(int arr[],int ind1,int ind2){ //normal swap
    int temp;
    temp=arr[ind1];
    arr[ind1]=arr[ind2];
    arr[ind2]=temp;
}
void arr_printer(int arr[],int no_ele){ //printing the array

    int ind;
    for(ind=0;ind<no_ele;ind++){
        printf("%d ",arr[ind]);
    }
    printf("\n");
}
void max_heapify(int arr[],int parent_ind,int scope){
    int left_ind,right_ind;             //declaring the indexes
    left_ind=parent_ind*2+1;            //left=13*2+1=27
    right_ind=left_ind+1;               //right=13+1=28;
    if(left_ind>scope){                 //13>14 false
        return;
    }   
    if(left_ind==scope)                 
    {
        if(arr[left_ind]>arr[parent_ind])
        swap(arr,left_ind,parent_ind);
        return;
    }
    if(arr[left_ind]>arr[parent_ind]|| arr[right_ind]>arr[parent_ind]){//arr[13]=90 > arr[6]=75
        if(arr[left_ind]>arr[right_ind])        //90>3
        {
            swap(arr,left_ind,parent_ind);          
            max_heapify(arr,left_ind,scope);
        }
        else{
            swap(arr,right_ind,parent_ind);
            max_heapify(arr,right_ind,scope);
        }
    }
}                                                                                                           
void heap_sort(int arr[],int no_ele){       
    int scope;
    int parent_ind;
    scope=no_ele-1;                 //scope=14
    for(parent_ind=(scope-1)/2;parent_ind>=0;parent_ind--){          //parent=5   //parent=13/2=6
        max_heapify(arr,parent_ind,scope);    //(arr,5,14)        //(arr,6,14)
    }
    swap(arr,0,scope);
    while(scope>0){
        scope--;
        max_heapify(arr,0,scope);
        swap(arr,0,scope);
    }
    arr_printer(arr,no_ele);
}
int main(){
    int arr[]={5,15,10,	25,	55,	35,	75,	45,	95,	50,	70,	40,	60,	90,	3};
    int no_ele;
    no_ele=sizeof(arr)/sizeof(arr[0]);
    arr_printer(arr,no_ele);
    heap_sort(arr,no_ele);
    return 0;
}


