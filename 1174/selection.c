#include <stdio.h>
#include <math.h>

int main(){
  int i;
  float n;

  for(i = 0; i < 100; i++) {
    scanf("%f", &n);
    if (islessequal(n, 10.0)) {
      printf("A[%d] = %.1f\n", i, n);
    }
  }
}
