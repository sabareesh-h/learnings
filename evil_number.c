#include<stdio.h>
int dec_to_bin(int n,int base,int rem){
    if(n==0){
        return rem;
    }
    int temp=n%base;
    n/=2;
    rem=rem*10+temp;
    dec_to_bin(n,2,rem);

}
int countn(int rem,int count){
    if(rem%10==1){
        count++;
        rem/=10;
    }
    if(rem==0){
        return count;
    }
    countn(rem,count);
}
int main()
{
    int n;
    scanf("%d",&n);
    int rem=dec_to_bin(n,2,0);
    int counter=countn(rem,0);
    if(counter<n)
    printf("evil_number");
    else{
        printf("Not");
    }
}