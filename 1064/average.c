#include <stdio.h>

int main(){
  int i, c = 0;
  float n, ac = 0;

  for (i = 0; i < 6; i++) {
    scanf("%f", &n);
    if (n > 0) { c++; ac += n; }
  }
  printf("%d valores positivos\n%.1f\n", c, ac/c);
}
