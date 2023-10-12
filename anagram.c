#include<stdio.h>
#include<string.h>
// To check whether the given strings are anagram or not.
int main(){
    char str[20],str1[20];
    int count=0,count1,count2=0;
    printf("Enter the first string : ");
    scanf("%s",&str);
    printf("Enter the second string : ");
    scanf("%s",&str1);
    count1=strlen(str);
    if(strlen(str)==strlen(str1)){
        for(int i=0; i<=strlen(str); i++){
            for(int j=0; j<strlen(str1); j++){
                if(str[i]==str1[j]){
                    count++;
                    break;
                }
            }
        }
        if(count==strlen(str)){
            for(int i=0; i<strlen(str); i++){
                for(int j=0; j<count1; j++){
                    if(str[i]==str1[j]){
                        count2++;
                        for(int k=j; k<count1; k++){
                            str1[k]=str1[k+1];
                        }
                        count1--;  
                    }       
                }
            }
            
            if(count2==strlen(str)){
                printf("The strings are anagram");
            }
            else{
                printf("The strings are not anagram");
            }
        }
        else{
            printf("The strings are not anagram");
        }
            
    }
    else{
        printf("The strings are not anagram");
    }
    
}
