#include<stdio.h>
int reverse(int n){
    int num=0;
    while(n){
    int temp=n%10;
    n=n/10;
    num=num*10+temp;
    }
    return num;
}
int main(){
    int n;
    scanf("%d",&n);
    int sqrt_num=n*n; //144
    int rev_num=reverse(n); //21
    int sqrt_rev_num=reverse(rev_num*rev_num);//441
    if(sqrt_num==sqrt_rev_num){
        printf("Adam number");
    }
    else{
        printf("no");
    }
    return 0;
    }


