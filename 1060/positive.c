#include <stdio.h>

int main(){
  int i, n, c = 0;
  for (i = 0; i < 6; i++) {
    scanf("%f", &n);
    if (n > 0) c++;
  }
  printf("%d valores positivos\n", c);
}
