#include<stdio.h>
int is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int prime=is_prime(n);
    int safe=0;
    if(prime){
    int safe_pri=(2*n)+1;
    safe=is_prime(safe_pri);
    }
    if(safe){
        printf("Sophie Germain Prime");
    }
    else{
        printf("Not");
    }
    return 0;


}