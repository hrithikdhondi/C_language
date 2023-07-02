#include<stdio.h>
// swaping two numbers
void swap(int* a, int* b);
int main(){
    int x = 2, y = 3;
    swap(&x,&y);
    printf("x = %d & y = %d",x,y);
}
void swap(int* a,int* b){
    int* t;
    *t = *b;
    *b = *a;
    *a = *t;
    printf("a = %d & b = %d\n",*a,*b);
}