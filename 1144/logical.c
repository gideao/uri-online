#include <stdio.h>
#include <math.h>

int main(){
  int n, i, x, y;
  scanf("%d", &n);

  for (i = 1; i < n + 1; i++) {
    printf("%d %d %d\n", i, x = pow(i, 2), y = pow(i, 3));
    printf("%d %d %d\n", i, x + 1, y + 1);
  }
}
