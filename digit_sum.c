#include<stdio.h>
// Sum of the first and last digit of the given number.
int main(){
    int num,temp,sum1,sum;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=0; temp!=0; i++){
        sum1=temp;
        temp=num%10;
        if(i==0)
        sum=temp;
        num=num/10;
    }
   
    printf("The sum of the first and last digit of the number is %d",sum+sum1);
    return 0;
}