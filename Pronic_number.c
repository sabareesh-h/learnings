#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i*(i+1)<=n;i++){
        if(i*(i+1)==n){
            printf("Pronic number");
            return 0;
        }

    }
    printf("Not");
return 0;
}