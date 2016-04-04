#include <stdio.h>

int main(){
  int i; 
  float s, x;

  for (i = 0, s = 0; i < 2;) {
    scanf("%f", &x);
    if (0 > x || 10 < x) {
      puts("nota invalida");
      continue;
    }
      i++;
      s += x;
  }
  printf("media = %.2f\n", s/2);
}
