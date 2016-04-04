#include <stdio.h>

int main(){
  int i, n, m;

  for(i = 0; i < 10; i++) {
    scanf("%d", &n);
    if (n < 1) {
      printf("X[%d] = 1\n", i);
    } else {
      printf("X[%d] = %d\n", i, n);
    }
  }
}
