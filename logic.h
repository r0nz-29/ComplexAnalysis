#include<stdio.h>
typedef struct CMPLX{
  float real;
  float img;
}CMPLX;

CMPLX addCnums(CMPLX *nums, int n){
  CMPLX sum;
  sum.real=0, sum.img=0;
  for(int i=0; i<n; i++){
    sum.real += (nums+i)->real;
    sum.img += (nums+i)->img;
  }
  return sum;
}

CMPLX *inputCnums(int n, CMPLX *nums){
  for(int i=0; i<n; i++){
    scanf("%f+i%f", &(nums[i].real), &(nums[i].img));
  }
  //CMPLX *ptr = nums;
  return nums;
}

void printCnums(CMPLX *nums, int n){
  for(int i=0; i<n; i++){
    printf("%.2f+i%.2f\n", (nums+i)->real, (nums+i)->img);
  }
}

CMPLX diffCnums(CMPLX n1, CMPLX n2){
  CMPLX diff;
  diff.real = n1.real - n2.real;
  diff.img  = n1.img - n2.img;
  return diff;
}

CMPLX prodCnums(CMPLX n1, CMPLX n2){
  CMPLX product;
  product.real = (n1.real * n2.real)-(n1.img * n2.img);
  product.img = (n1.real * n2.img)+(n1.img * n2.real); 
  return product;
}

CMPLX conjugate(CMPLX num){
  num.img = -num.img;
  return num;
}

CMPLX divideCnums(CMPLX n1, CMPLX n2){
 float factor = n2.real*n2.real + n2.img*n2.img;
 CMPLX result;
 CMPLX conj_n2 = conjugate(n2);
 result.real = (prodCnums(n1, conj_n2).real)/factor;
 result.img = (prodCnums(n1, conj_n2).img)/factor;
 return result;
}
