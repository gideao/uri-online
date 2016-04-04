#include <stdio.h>

int main(){
  float s, p, a;
  scanf("%f", &s);

  if (s <= 400)
    p = 15;
  if (s > 400 && s <= 800)
    p = 12;
  if (s > 800 && s <= 1200)
    p = 10;
  if (s > 1200 && s <= 2000)
    p = 7;
  if (s > 2000)
    p = 4;

  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", s + s*p/100, s*p/100, p);
}
