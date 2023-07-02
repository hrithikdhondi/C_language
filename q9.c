#include<stdio.h>
int main(){
    char i,*p;
    
    for(char i='a'; i<='z';i++){
        p=&i;
        printf("%c ",*p);
    }
}