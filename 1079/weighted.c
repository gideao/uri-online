#include <stdio.h>

int main(){
  int n, i;
  float f1, f2, f3;
  scanf("%d\n", &n);

  for (i = 0; i < n; i++) {
    scanf("%f %f %f", &f1, &f2, &f3);
    printf("%.1f\n", (f1 * 2 + f2 * 3 + f3 * 5)/10);
  }
}
