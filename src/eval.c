#include <math.h>

double eval(int *c, int n, double x) {
  double r = 0.0;
  for (int i = 0; i < n; ++i) {
    if (i == 0)
      r = r + c[i];
    else
      r = r + c[i] * pow(x, i);
  }
  return r;
}

long double evall(int *c, int n, long double x) {
  double r = 0.0;
  for (int i = 0; i < n; ++i) {
    if (i == 0)
      r = r + c[i];
    else
      r = r + c[i] * pow(x, i);
  }
  return r;
}

