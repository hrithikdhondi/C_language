#include<stdio.h>
int main(){
    int num,temp,rev=0,n;
    printf("Enter the number : ");
    scanf("%d",&num);
     while(num!=0){
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    n=rev;
    while(n!=0){
        temp=n%10;
        
        switch (temp)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;    
        }
        n=n/10;
    }
}