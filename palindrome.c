#include<stdio.h>
int main(){
    int num2=0,num,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        num2 = num2*10 + temp%10;
        temp=temp/10;
    }
    if(num2==num){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }
}
