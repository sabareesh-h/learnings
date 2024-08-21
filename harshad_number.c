#include<stdio.h>
int harshad_num(int num,int sum){
    if(num==0){
        return sum;
    }
    int rem=num%10;  
    sum+=rem;    
    num=num/10;    
    harshad_num(num,sum);
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int ans=harshad_num(n,sum);
    if(n%ans==0){
        printf("Harshad number");
    }
    else{
        printf("Not");
    }
}