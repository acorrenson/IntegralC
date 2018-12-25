#include <stdio.h>
#include <math.h>
#include "eval.h"

double prec = 1E-6;

double limit_sum_inf(int *c, int n, float a, float b) {
  double s = 0.0;
  int step = roundl((b-a)/prec);
  for (int i = 0; i < step; ++i) {
    s = s + eval(c, n, a+i*prec) * prec;
  }
  return s;
}