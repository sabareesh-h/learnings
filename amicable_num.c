#include<stdio.h>
int main(){
    int num1;
    int num2;
    int sum1=0,sum2=0;;
    scanf("%d%d",&num1,&num2);
    for(int i=1;i<num1;i++){
        if(num1%i==0){
            sum1+=i;
        }

    }
    for(int i=1;i<num2;i++){
        if(num2%i==0){
            sum2+=i;
        }
        
    }
     if((sum1==num2) && (sum2 == num1)){
        printf("Amicable number");
    }
    else{
        printf("not");
    }
}