#include<stdio.h>
// to check the given character is digit or not.
int main(){
    char a;
    printf("Enter : ");
    scanf("%c", &a);
    if((a >= '0' && a <='9') || (a>=-'9' && a<='0')){
        printf("The given character is an integer\n", a);
        
    }
    else{
        printf("The given character is not an integer.\n");
    }
}