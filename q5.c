#include<stdio.h>
// to check the given character is digit or not (by basic progom)
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    printf("%d", (a>=0 && a<=9) || (a>=-9 && a<=0));
    return 0;
}