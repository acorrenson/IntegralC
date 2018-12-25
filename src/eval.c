#include <math.h>

float eval(int *c, int n, float x) {
  float r = 0.0;
  for (int i = 0; i < n; ++i) {
    if (i == 0)
      r = r + c[i];
    else
      r = r + c[i] * pow(x, i);
  }
  return r;
}
