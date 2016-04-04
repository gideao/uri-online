#include <stdio.h>

int main(){
  int i, n, p = 0, v = 0;

  for (i = 0; i < 100; i++) {
    scanf("%d", &n);
    if(n > v) {
      v = n;
      p = i + 1;
    }
  }
  printf("%d\n%d\n", v, p);
}
