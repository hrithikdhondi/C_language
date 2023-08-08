#include<stdio.h>
// To Check the given character is uppercase or not.
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("The given character is uppercase");
    } else if (ch>='a' && ch<='z'){
        printf("The given character is not an uppercase");
    } else {
        printf("Invaild Input");
    }
    return 0;
}