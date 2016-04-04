#include <stdio.h>

int main(){
  int i, x, e = 0, p = 0, n = 0;

  for (i = 0; i < 5; i++) {
    scanf("%d", &x);
    if (x > 0) p++;
    if (x < 0) n++;
    if (x % 2 == 0) e++;
  }

  printf("%d valor(es) par(es)\n", e);
  printf("%d valor(es) impar(es)\n", 5 - e);
  printf("%d valor(es) positivo(s)\n", p);
  printf("%d valor(es) negativo(s)\n", n);

}
