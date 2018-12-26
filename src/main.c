#include <stdlib.h>
#include <stdio.h>
#include "limit_sum.h"

int main(int argc, char const *argv[])
{
  // ask for degree of the polynomial
  int n = 0;
  printf("Enter the degree of the polynomial :\n");
  scanf("%d", &n);

  if (n < 0) {
    fprintf(stderr, "[error] Unable to evaluate negative degrees\n");
    return 1;
  }
  
  // alloc memory to store coefs
  int *coefs = malloc((n+1)*sizeof(int));

  // input coefs
  for (int i = 0; i < n+1; ++i) {
    printf("coefficient %d :\n", i);
    scanf("%d", coefs+i);
  }

  // display the polynomial in the console
  printf("Your polynomial is :\n");

  for (int i = 0; i < n+1; ++i) {
    int c = coefs[i];
    if (i == 0 && c != 0)
      printf("%d + ", c);
    else if (i < n && c != 0)
      printf("%dx^%d + ", c, i);
    else if (c != 0)
      printf("%dx^%d\n", c, i);
  }


  float a; // lower limit
  float b; // upper limit

  printf("lower limit\n");
  scanf("%f", &a);
  
  printf("upper limit\n");
  scanf("%f", &b);

  // print the result
  printf("Integral from  %.3f to %.3f : %f\n",
    a, b, limit_sum_inf(coefs, n+1, a, b));

  return 0;
}