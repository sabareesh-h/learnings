//emirp number
#include<stdio.h>
int prime_check(int n,int flag){
int i;
for( i=2;i<=n;i++){ 
        if(n%i==0){
                flag=1;
            }
        }
        printf("%d ",i);
        return flag;

}
int main(){
    int n,rem,rev=0;
    scanf("%d",&n);

    int num1=prime_check(n,0);
   while(n){
        rem=n%10;
        n/=10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    int num2=prime_check(rev,0);
    if(num1==num2){
        printf("Emirp_nu");
    }
    else{
        printf("Not");
    }
    
}