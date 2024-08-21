#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int comp=n;
    int count=1;
    while(comp>0){
        comp/=10;
        count*=10;
    }
    int sqrt_num=n*n;
    
        comp=sqrt_num%count;
    if(n==comp){
        printf("Automorphic");
    }
    else{
        printf("Not");
    }
    
}