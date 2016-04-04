#include <stdio.h>

int main(){
  int i, op;
  float s, x;

  do {
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

    op = 0;
    while (1 > op || 2 < op) {
      puts("novo calculo (1-sim 2-nao)");
      scanf("%d", &op);
    }

  } while(op % 2);


}
