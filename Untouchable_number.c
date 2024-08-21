#include<stdio.h>
int is_div(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
        
    }
    return sum;
}

int main(){
    int n1;
    scanf("%d",&n1);
    for (int i = 2; i < n1 * 2; i++) {
        if (is_div(i) == n1) {
            printf("not");
            return 0; // n is not untouchable
        }
    }
    printf("untouchable number");
    return 0;
}