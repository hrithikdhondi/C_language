#include<stdio.h>
//To check wheather it is prime number or not
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int flag=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            flag++;
        }
    }
    if(flag==1){
        printf("It is prime number");
    }else{
    (flag==2)?printf("It is prime number"):printf("It is not prime number");
    }
}