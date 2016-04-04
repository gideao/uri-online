#include <stdio.h>

int main(){
  int i = 0;
  double n;
  scanf("%lf", &n);

  do {
    printf("N[%d] = %.4lf\n", i, n);
    i++;
    n /= 2;
  } while(i < 100);
}
