#include<stdio.h>
// sum of the digits of a number
int sum(int n);
int main(){
    int m;
    printf("Enter the number : ");
    scanf("%d",&m);
    sum(m);
}
int sum(int n){
    int m,sum=0;
    while(n>0){
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("Sum of the digits is %d",sum);
}