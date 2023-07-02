#include<stdio.h>
// funtion to print cold or hot acc to the temp given by user
void hot();
void cold();
int main(){
    int a;
    printf("Enter the temperature in celsius: ");
    scanf("%d",&a);
    if(a>27){
        hot();
    }
    else if(a<=27){
        cold();
    }
}
void hot(){
    printf("Hot");
}
void cold(){
    printf("cold");
}