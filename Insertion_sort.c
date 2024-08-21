#include<stdio.h>
#include<stdlib.h>
void insertionsort(int a[]){
    for(int i=0;i<10;i++){
        int curr=a[i];          //curr=2        //curr=1                //curr=6
        int j=i-1;              //j=-1          //j=0                   //j=1
        while(j>=0&&a[j]>curr){ //no loop       //a[0]=2>1 == true      //a[1]=1>6
            a[j+1]=a[j];                        //a[1]=a[0] == a[1]=2   //
            j--;                                //j--   j=-1
        }
        a[j+1]=curr;            //a[-1+1]=2  == a[0]=2    //a[0]=1      //a[1]=6
    }
}
int main()
{
    int a[10]={2,1,6,5,7,4,8,9,3,0};
    
    insertionsort(a);
    for(int i=0;i<10;printf("%d",a[i++]));
    return 0;
}