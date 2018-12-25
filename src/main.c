#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  // ask for degree of the polynomial
  int n = 0;
  printf("Enter the degree of the polynomial :\n");
  scanf("%d", &n);
  
  // alloc memory to store coefs
  int *coefs = malloc(n*sizeof(int));

  // input coefs
  for (int i = 0; i < n; ++i) {
    printf("coefficient %d :\n", i);
    scanf("%d", coefs+i);
  }

  printf("Your polynomial is :\n");

  for (int i = 0; i < n; ++i) {
    int c = coefs[i];
    if (i == 0 && c != 0)
      printf("%d + ", c);
    else if (i < n-1 && c != 0)
      printf("%dx^%d + ", c, i);
    else if (c != 0)
      printf("%dx^%d\n", c, i);
  }
    
  return 0;
}