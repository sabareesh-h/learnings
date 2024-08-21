#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i*i==n){
            printf("Perfect square");
            return 0;
        }
    }
    printf("Not");
    return 0;
}