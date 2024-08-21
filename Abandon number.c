#include <stdio.h>
int num_crunch(int num,int sum){
    if(num<10){
        return sum;
    } //1234
    int temp=num%10;            //4
    num/=10;                       //123
    sum+=temp;                  //10
    num_crunch(sum,0);
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=num_crunch(n,0);

}