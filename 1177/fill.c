#include <stdio.h>

int main(){
  int i, j, n;
  scanf("%d", &n);

  for (i = 0, j = 0; i < 1000; i++, j++) {
      printf("N[%d] = %d\n", i, j % n);
  }
}
