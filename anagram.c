#include<stdio.h>
#include<string.h>
// To check whether the given strings are anagram or not.
int main(){
    char str1[20],str2[20],count=0,count1=0,count2=0;
    printf("Enter the first string : ");
    scanf("%s",str1);
    printf("Enter the second string : ");
    scanf("%s",str2);
    if(strlen(str1)==strlen(str2)){
        for(int i=0; i<strlen(str1); i++){
            for(int j=0; j<=strlen(str2); j++){
                if(str1[i]==str2[j]){
                    count++;
                    break;
                }
            }
        }
        if(strlen(str1)==count){
            for(int i=0; i<strlen(str1); i++){
                for(int j=0; j<=strlen(str2); j++){
                    if(str1[i]==str2[j]){
                        count1++; 
                    }
                }
            }
            for(int i=0; i<strlen(str1); i++){
                for(int j=0; j<=strlen(str2); j++){
                    if(str1[i]==str2[j]){
                        count2++;
                    }
                }
            }
            if(count1==count2){
                printf("The strings are Anagram");
            } 
            else{
                printf("The strings are Anagram");
            }
        } 
        else{
            printf("The strings are Anagram");
        }
    }
    else{
        printf("The strings are Anagram");
    }
}