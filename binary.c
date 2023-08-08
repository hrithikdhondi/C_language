#include<stdio.h>
// to check whether the given number is binary or not.
int main(){
    int count,m,num,n;
    printf("Enter the number: ");
    scanf("%d",&num);
    count=0;
    m=0;
    for(int i=0; num!=0; i++){
        n=num%10;
        num=num/10;
        count++;
        if(n==0 || n==1)
        m++;
    }
    if(m==count)
    printf("It is binary number");
    else
    printf("It is a non binary number");
    return 0;
}