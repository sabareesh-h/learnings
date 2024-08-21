#include<stdio.h>
int is_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(is_prime(n1) && is_prime(n2) && (n2-n1==2||n1-n2==2)){
        printf("twin prime");
    }
    else{
        printf("Not");
    }

}