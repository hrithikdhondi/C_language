#include<stdio.h>
// function for power
int power(int a, int b);
int main(){
//    int a,b;
//     printf("Enter the first number : ");
//     scanf("%d",&a);
//     printf("Enter the second number : ");
//     scanf("%d",&b);
//     power(a,b);
power(3,2);
return 0;
}
int power(int a, int b){
    int mult, f=a;
    for(int i=2; i<=b; i++){   
        mult=f*a;
        f=mult;
    }
    printf("%d",f);
    return 0;
}