#include<stdio.h>
#include<string.h>
// To remove a given character from the string.
int main(){
    char ch,str[100], str1[100];
    printf("Enter the string : ");
    scanf("%s",&str);
    printf("Enter the character you need to remove from the string : ");
    scanf("%s",&ch);
    int j=0;
    for(int i=0; i<=strlen(str); i++){
        if(str[i]!=ch){
            str1[j]=str[i];
            j++;
        } 
    }
    printf("%s",str1);
}