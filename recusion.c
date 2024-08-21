#include<stdio.h>
void recur(int n){
    if(n==0){
        return;}
        
    recur(n-1);     //5 //
    printf("%d",n);
    
    }
int main(){
    int n=5;
    recur(n);
}