#include <stdio.h>
// To find the LCM of the two numbers.
int main() {
    int n1, n2, m;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    m = (n1 > n2) ? n1 : n2;
    while (1) {
        if (m % n1 == 0 && m % n2 == 0) {
            printf("The LCM of %d and %d is %d", n1, n2, m);
            break;
        }
        m++;
    }
    return 0;
}