#include<stdio.h>
int main(){
    int a,b,*p,*t;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    p=&a;
    t=&b;
    if(*p>*t){
        printf("%d is greater",*p);
    }else if (*p<*t)
    {
        printf("%d is greater",*t);
    }
    else{
        printf("both are equal");
    }
}