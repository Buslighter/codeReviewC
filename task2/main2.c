#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int r;
  int ans = 0;
  if (scanf("%d", &r) != 1) {
    ans = 1;
  }
  if (ans != 1) {
    double V = (4. / 3.) * M_PI * pow(r, 3);
    double p = 21500.;
    printf("%0.lf", V * p);
  } else
    printf("n/a");
  return ans;
}