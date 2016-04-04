#include <stdio.h>

int main(){
  int i, n, f;

  scanf("%d", &n);

  for(i = n, f = n; i - 1; i--) f *= (i - 1);

  printf("%d\n", f);
}
