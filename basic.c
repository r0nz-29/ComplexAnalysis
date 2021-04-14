#include<stdio.h>
#include "logic.h"
#define TRUE 1
#define FALSE 0
int main() {
  printf("Enter in this format: C1 op C2:\n");
  int flag=TRUE;
  do{
  printf(" ");
  CMPLX c1, c2;
  char op;
  scanf("%f+i%f %c %f+i%f", &c1.real, &c1.img, &op, &c2.real, &c2.img);
  switch (op) {
    case '+': {
                CMPLX nums[2] = {c1, c2};
                CMPLX sum;
                sum.real = addCnums(nums, 2).real;
                sum.img = addCnums(nums, 2).img;
                printf("Sum is: %.2f +i %.2f\n", sum.real, sum.img);
                break;
              }
    case '-': {
                CMPLX diff;
                diff.real = diffCnums(c1, c2).real;
                diff.img = diffCnums(c1, c2).img;
                printf("Difference is: %.2f +i %.2f\n", diff.real, diff.img);
                break;
              }
    case '*': {
                CMPLX prod;
                prod.real = prodCnums(c1, c2).real;
                prod.img = prodCnums(c1, c2).img;
                printf("Product is: %.2f +i %.2f\n", prod.real, prod.img);
                break;
              }
    case '/': {
                CMPLX result;
                result.real = divideCnums(c1, c2).real; 
                result.img = divideCnums(c1, c2).img;
                printf("Result is: %.2f +i %.2f\n", result.real, result.img);
                break;
              }
  //endSwitch
  }
  }while(flag);
  return 0;
}
