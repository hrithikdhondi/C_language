#include<stdio.h>
// Average of 3 numbers
int main(){
  float x,y,z;
  printf("Number X: ");
  scanf("%f", &x);
  printf("Number Y: ");
  scanf("%f", &y);
  printf("Number Z: ");
  scanf("%f", &z);
  printf("The average is : %f", (x+y+z)/3);
  return 0;
}